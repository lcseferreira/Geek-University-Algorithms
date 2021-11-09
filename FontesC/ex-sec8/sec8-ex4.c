#include <stdio.h>

int main () {

	int vetor[20], soma = 0;

	for (int i = 0; i < 20; i++) {
		printf("Digite um número: ");
		fflush(stdout);
		scanf("%d", &vetor[i]);

		soma += vetor[i];
	}

	printf("Soma: %d", soma);

}
