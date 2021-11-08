#include <stdio.h>

int main () {
	int n1;

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &n1);

	if (n1 % 2 == 0 && n1 > 0) {
		printf("O número %d é par e positivo.", n1);
	} else if (n1 % 2 == 0 && n1 < 0) {
		printf("O número %d é par e negativo.", n1);
	} else if (n1 % 2 != 0 && n1 > 0) {
		printf("O número %d é ímpar e positivo.", n1);
	} else if (n1 % 2 != 0 && n1 < 0) {
		printf("O número %d é ímpar e negativo.", n1);
	} else {
		printf("O número %d é neutro.", n1);
	}
}
