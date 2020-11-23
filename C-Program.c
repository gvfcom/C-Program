#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nomeMax 102

int main() {
	struct aluno {
		char nome[102];
		int ra;
		float notaP1;
		float notaP2;
	};
	
	int n, i;
	struct aluno* estudante;
	
	scanf("%d", &n);
	
	estudante = (struct aluno*) malloc( n * sizeof( struct aluno ) );
	float* media = (float *) malloc( n * sizeof( float ) );
	
	for( i=0; i < n; i++ ) {
		getchar();
		fgets(estudante[i].nome,nomeMax,stdin);
		scanf("%d", &estudante[i].ra);
		scanf("%f", &estudante[i].notaP1);
		scanf("%f", &estudante[i].notaP2);
		
		estudante[i].nome[strlen(estudante[i].nome)-1] = '\0';
		media[i] = ( estudante[i].notaP1 + estudante[i].notaP2 ) / 2;
	}
	
	for( i=0; i < n; i++ ) {
		printf("%d", estudante[i].ra);
			printf("\t");
		printf("%s", estudante[i].nome);
			printf("\t");
		printf("%.2f", media[i]);
		printf("\n");
	}
}
