#include <stdio.h>

int main() {
	int num, p, i;

	p = i = 0;

	printf("Digite um n�mero: ");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 2 == 0) {
		p = num;
		printf("%d � par", p);
	} else {
		i = num;
		printf("%d � �mpar", i);
	}
}
