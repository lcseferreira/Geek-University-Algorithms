#include <stdio.h>

int main() {
	int horas, excesso;
	float salario, extra, valor_hora = 10.00;

	printf("Digite o número de horas trabalhadas: ");
	fflush(stdout);
	scanf("%d", &horas);

	if (horas > 50) {
		excesso = horas - 50;
		extra = excesso * 20;
		salario = 50 * valor_hora + extra;

		printf("Salário: R$ %.2f \n", salario);
		printf("Salário extra: R$ %.2f \n", extra);
	} else {
		salario = horas * valor_hora;

		printf("Salário: R$ %.2f \n", salario);
	}
}
