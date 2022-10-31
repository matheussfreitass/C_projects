#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	setlocale (LC_ALL,"");



int l,c,i,j;
int **matriz;
	printf ("Digite o número de linhas: ");
	scanf ("%d",&l);
	
	printf ("\nDigite o número de colunas: ");
	scanf ("%d",&c);


matriz = (int *)malloc (l * sizeof (int));
for (i=0;i<l;i++){
	matriz [i] = (int**)malloc (c * sizeof (float));
	}	
	for (i = 0;i<l;i++){
		for(j = 0; j < c; j++){
		matriz [i][j] =i;
		printf ("%d",matriz [i][j]);
		}
		printf("\n");
	}
	free (matriz);
	return 0;
}
