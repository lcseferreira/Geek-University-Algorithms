#include <stdio.h>
#include <stdbool.h>

int main () {

	int vetor[10];
	bool maior_que_50 = false;

	for (int i = 0; i < 10; i++) {

		printf("Digite um n�mero: ");
		fflush(stdout);
		scanf("%d", &vetor[i]);

		if (vetor[i] > 50) {
			printf("N�mero %d maior que 50, posi��o %d\n", vetor[i], i);
			maior_que_50 = true;
		}
	}

	if (!maior_que_50) {
		printf("N�o h� n�meros maiores que 50!");
	}
}
