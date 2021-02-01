#include <stdio.h>
#include <stdlib.h>

void main (){

    int nadador;

    printf("Informe a idade do nadador: \n");
    scanf("%d", nadador);

    if (nadador>=5 && nadador<=7)
    {
        printf("Nadador da categoria Infantil A!");
    }
    else if (nadador>=8 && nadador<=10)
    {
        printf("Nadador da categoria Infantil B!");
    }
    if (nadador>=11 && nadador<=13)   
    {
        printf("Nadador da categoria Juvenil A!");
    }
    else if (nadador>=14 && nadador<=17)
    {
        printf("Nadador da categoria Juvenil B!");
    }
    if (nadador>=18)
    {
        printf("Nadador da categoria Senior!");
    }

}