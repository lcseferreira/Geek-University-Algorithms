#include <stdio.h>

int main () {
	int vetor[5], pares[5], cont_pares = 0;

	for (int i = 0; i < 5; i++) {
		printf("Digite um n�mero: ");
		fflush(stdout);
		scanf("%d", &vetor[i]);

		if ((vetor[i] > 0) && (vetor[i] % 2 == 0)) {
			pares[cont_pares] = vetor[i];
			cont_pares += 1;
		}
	}

	for (int i = 0; i < cont_pares; i++){
		printf("%d\n", pares[i]);
	}
}
