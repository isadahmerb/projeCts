#include<stdio.h>

int Pesquisa_Binaria(int lista[], int tamanho, int item){
    int baixo = 0;
    int alto = tamanho - 1;

        while (baixo <= alto) {
            int meio = (baixo + alto) / 2;
            int chute = lista[meio];

        if (chute == item) {
            return meio;
        }

        if (chute > item){
            alto = meio - 1;
        }
        else {
            baixo = meio + 1;
        }
    }
        return -1;
}


int main(){

    int minha_lista[] = {1, 3, 5, 7, 9};
    int tamanho = 5;
    int item;

    printf("Lista: 1, 3, 5, 7, 9 \n");
    printf("qual numero? ");
    scanf("%d", &item);

    int resultado = Pesquisa_Binaria(minha_lista, tamanho, item);

    if(resultado != -1) {
        printf("Numero %d encontrado no indice: %d\n", item, resultado);
    }
    else {
        printf("Numero %d nao encontrado na lista!\n", item);
    }
    return 0;
}
