#include <stdio.h>

int main() {

	for (int i = 1; i <= 100; i++) {

		if (i % 10 != 0) {
			printf("%d\n", i);
		} else {
			printf("%d � m�ltiplo de 10\n", i);
		}
	}
}
