#include <stdio.h>
// INCLUINDO A BIBLIOTECA stdio.h
// std = Standard (PADR�O)
// io = input/output (ENTRADA/SA�DA)

// FUN��O QUE RETORNA UM INTEIRO
int main() {
	// DECLARANDO VARI�VEIS
	int num1, num2, resultado;

	// ENTRADAS
	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &num1);	// ENTRADA DE DADOS

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &num2); // ENTRADA DE DADOS

	// PROCESSAMENTO
	resultado = (num1 + num2) * num1;

	// SA�DA
	printf("O resultado � %d", resultado);
}
