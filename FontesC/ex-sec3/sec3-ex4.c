#include <stdio.h>

int main() {
	int num1, num2, soma;

	printf("Digite o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Digite o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &num2);

	soma = num1 + num2;

	printf("A soma entre %d e %d � %d", num1, num2, soma);
}
