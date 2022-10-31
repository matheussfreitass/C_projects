#include <stdlib.h>
#include <stdio.h>

int main (void){
    int op,v1,v2,resp;

    printf("Isira a opção que deseja realiar.\n digite 1 para soma, digite 2 para subtracao,digite 3 para multiplicacao ou 4 para divisao ");
    scanf ("%d",&op);
     if (op == 1){
       printf (" Digite o primeiro numero desejado: ");
       scanf ("%d",&v1);
       printf (" Digite o segundo numero desejado: ");
       scanf ("%d",&v2);
       resp = v1 + v2;
      printf("A soma total eh: %d",resp);
      }else 
          if (op ==2){
            printf (" Digite o primeiro numero desejado: ");
            scanf ("%d",&v1);
            printf (" Digite o segundo numero desejado: ");
            scanf ("%d",&v2);
            resp = v1-v2;
            printf ("A subtracao resultou em:  %d",resp);
            }else 
              if (op == 3){
              printf("Digite o primeiro numero desejado: ");
              scanf ("%d",&v1);
              printf ("Digite o segundo numero desejado: ");
              scanf ("%d",&v2);
              resp = v1*v2;
              printf ("A multiplicação resultou em: %d",resp);
            }else
              if (op == 4 ){
                printf ("Digite o primeiro numero desejado: ");
                scanf ("%d",&v1);
                printf ("Digite o segundo numero desejado: ");
                scanf ("%d",&v2);
                resp= v1/v2;
                printf ("O resultado da divisão foi: %d",resp);
              }
    return 0;
}