#include <stdio.h>

int main() {
	int horas, excesso;
	float salario, extra, valor_hora = 10.00;

	printf("Digite o n�mero de horas trabalhadas: ");
	fflush(stdout);
	scanf("%d", &horas);

	if (horas > 50) {
		excesso = horas - 50;
		extra = excesso * 20;
		salario = 50 * valor_hora + extra;

		printf("Sal�rio: R$ %.2f \n", salario);
		printf("Sal�rio extra: R$ %.2f \n", extra);
	} else {
		salario = horas * valor_hora;

		printf("Sal�rio: R$ %.2f \n", salario);
	}
}
