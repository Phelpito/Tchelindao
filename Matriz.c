#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int c, l, i, j;
	int matriz [l] [c];
	
	printf("insira o numero de colunas desejadas: ");
	scanf("%d", &c);
	printf("insira o numero de linhas desejadas: ");
	scanf("%d", &l);
	printf("\n\n");
	
	for (i=0; i<l; i++){
		for (j=0 ; j<c; j++){
			matriz [i][j] = 0;
		}
		
	}
	
	for (i=0; i<l; i++){
		for (j=0 ; j<c; j++){
			printf(" %d", matriz [i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
