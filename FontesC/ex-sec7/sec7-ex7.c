#include <stdio.h>

int main() {
	int id, defeito, quantidade = 0,
	necessita_esfera = 0, necessita_limpeza = 0, necessita_cabo = 0, quebrado = 0;
	float perc_esfera, perc_limpeza, perc_cabo, perc_quebrado;


	printf("Digite o id do mouse ou 0 para encerrar: ");
	fflush(stdout);
	scanf("%d", &id);

	while (id != 0) {

		printf("\nIdentifique o defeito:\n"
				"1 = necessita de esfera\n"
				"2 = necessita de limpeza\n"
				"3 = necessita de troca de cabo ou conector\n"
				"4 = quebrado ou inutilizado\n\n"
				"Digite o defeito: ");
		fflush(stdout);
		scanf("%d", &defeito);

		if (defeito == 1) {
			necessita_esfera += 1;
			quantidade += 1;
		} else if (defeito == 2) {
			necessita_limpeza += 1;
			quantidade += 1;
		} else if (defeito == 3) {
			necessita_cabo += 1;
			quantidade += 1;
		} else if (defeito == 4) {
			quebrado += 1;
			quantidade += 1;
		} else {
			printf("Entrada inv�lida\n");
		}

		printf("\nDigite o id do mouse ou 0 para encerrar: ");
		fflush(stdout);
		scanf("%d", &id);
	}

	perc_esfera = (float)necessita_esfera / (float)quantidade * 100;
	perc_limpeza = (float)necessita_limpeza / (float)quantidade * 100;
	perc_cabo = (float)necessita_cabo / (float)quantidade * 100;
	perc_quebrado = (float)quebrado / (float)quantidade * 100;

	printf("\nQuantidade de mouses: %d\n\n", quantidade);
	printf("Situa��o                           Quantidade              Percentual\n");
	printf("1 - Necessita de esfera                %d                    %.2f%% \n", necessita_esfera, perc_esfera);
	printf("2 - Necessita de limpeza               %d                    %.2f%% \n", necessita_limpeza, perc_limpeza);
	printf("3 - Necessita de cabo                  %d                    %.2f%% \n", necessita_cabo, perc_cabo);
	printf("4 - Quebrado                           %d                    %.2f%% \n", quebrado, perc_quebrado);

}
