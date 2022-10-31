#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,aux;
/*Crie um algoritmo que leia dois valores A e B e efetue a troca dos valores de forma que a
variável A passe a possuir o valor da variável B e que a variável B passe a possuir o valor da
variável A. Ao final, deve apresentar os novos valores de A e B.
*/
    printf("Primeiro valor = \n");
    scanf ("%d", &a);
    printf ("Segundo valor = \n");
    scanf ("%d", &b);
    
    
    printf ("Realizando a inversao...\n");

    aux = a;
    a = b;
    b = aux;

    printf ("Primeiro valor:  %d",a);
    printf ("\n ");
    printf ("Segundo valor:  %d",b,"\n ");
    printf ("\n ");

    system("pause");
    return 0;
};