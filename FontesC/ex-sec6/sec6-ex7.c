// INCLUINDO A BIBLIOTECA PADRÃO std (standard) io (input/output)
#include <stdio.h>

int main () {
	// DECLARANDO VARIÁVEIS
	int n1, n2, n3, n4, q1, q2, q3, q4;

	// ENTRADA
	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &n2);

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &n3);

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &n4);

	// PROCESSAMENTO
	q1 = n1 * n1;
	q2 = n2 * n2;
	q3 = n3 * n3;
	q4 = n4 * n4;

	if (q3 >= 1000) {
		// SAÍDA
		printf("n3 = %d, q3 = %d\n", n3, q3);
	} else {
		// SAÍDA
		printf("n1 = %d, q1 = %d\n", n1, q1);
		printf("n2 = %d, q2 = %d\n", n2, q2);
		printf("n3 = %d, q3 = %d\n", n3, q3);
		printf("n4 = %d, q4 = %d\n", n4, q4);
	}
}
