#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

    char ch;
    char pass[20];
    char saved_pass[20];
    int i=0;

 while(1){
    ch = getch();
    if(ch==13){
        pass[i]='\0';
        break;
    }
    else {
        pass[i++]=ch;
        putchar('*');
    }
}

    printf("You Entered: %s\n", pass);

    FILE * ptr;
    ptr=fopen("password.txt", "r");
    fscanf(ptr, "%s", saved_pass);

    fclose(ptr);

    printf("Saved password %s \n", saved_pass);
    int l = strcmp(pass, saved_pass);
    if (l == 0) {
        printf("LOGIN SUCESSFULLY \n");
    }
    else {
        printf("INCORRET PASSWAORD\n");
    }




    return 0;
}
