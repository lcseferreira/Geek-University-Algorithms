#include <stdio.h>

int main() {
	float metros, cm;

	printf("Digite um valor em metros: ");
	fflush(stdout);
	scanf("%f", &metros);

	cm = metros * 100;

	printf("%.2f metro(s) equivale(m) a %.2f cm", metros, cm);
}
