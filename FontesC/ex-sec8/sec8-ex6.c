#include <stdio.h>

int main () {

	int codigo, vetor[5];

	printf("Digite o c�digo: ");
	fflush(stdout);
	scanf("%d", &codigo);

	if (codigo > 0) {
		for (int i = 0; i < 5; i++) {
		printf("Digite um n�mero: ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
		}

		if (codigo == 1) {
			for (int i = 0; i < 5; i++) {
			printf("%d\n", vetor[i]);
			}
		}

		if (codigo == 2) {
			for (int i = 5; i > 0; i--) {
			printf("%d\n", &vetor[i]);
			}
		}
	}
}
