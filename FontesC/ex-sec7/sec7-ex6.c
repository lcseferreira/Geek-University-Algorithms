#include <stdio.h>

int main() {
	int numero;

	printf("Digite o n�mero que voc� deseja ver a tabuada: ");
	fflush(stdout);
	scanf("%d", &numero);

	while (numero > 10) {
		printf("N�mero deve ser menor que 10\n");
		printf("Digite o n�mero que voc� deseja ver a tabuada: ");
		fflush(stdout);
		scanf("%d", &numero);
	}

	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
}
