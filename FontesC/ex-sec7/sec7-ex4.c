#include <stdio.h>

int main() {
	int valor, maior = -999, menor = 999, soma = 0;
	float media;

	for (int i = 0; i < 10; i++) {
		printf("Digite um n�mero positivo: ");
		fflush(stdout);
		scanf("%d", &valor);

		if (valor > 0) {
			if (valor > maior) {
				maior = valor;
			}
			if (valor < menor) {
				menor = valor;
			}
			soma += valor;
		} else {
			printf("Valor inv�lido");
			i--;
		}
	}

	media = soma / 10;

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("M�dia: %.2f\n", media);
}
