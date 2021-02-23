#include <stdio.h>
#include <stdlib.h>

void main(){
    
    char tipo[10];
    char nome[50];

    printf("Informe o nome do livro: \n");
    gets(nome);
    printf("Informe o tipo de usuario: \n");
    scanf("%c", &tipo);
    
    
    if (tipo == "aluno")
    {
        printf("Nome do livro: %c \n   Tipo de usuario: %c \nTotal de dias: 3", nome, tipo);
    }
    else if (tipo=="professor")
    {
        printf("Nome do livro: %c\n Tipo de usuario: %c \nTotal de dias: 10", nome, tipo);
    }
    

}
