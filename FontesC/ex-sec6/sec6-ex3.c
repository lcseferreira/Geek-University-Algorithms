#include <stdio.h>

int main() {
	int num, p, i;

	p = i = 0;

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 2 == 0) {
		p = num;
		printf("%d é par", p);
	} else {
		i = num;
		printf("%d é ímpar", i);
	}
}
