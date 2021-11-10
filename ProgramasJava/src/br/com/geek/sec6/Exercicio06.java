package br.com.geek.sec6;

import java.util.Scanner;

public class Exercicio06 {

	public static void main(String[] args) {
		
		// Declaração de variáveis
		int numero_horas;
		float valor_hora = 10, valor_exc = 20, excesso = 0, salario_exc = 0, salario;
		Scanner input = new Scanner(System.in);
		
		// Entradas
		System.out.println("Digite o número de horas trabalhadas: ");
		numero_horas = input.nextInt();
		
		// Processamento
		if (numero_horas > 50) {
			excesso = numero_horas - 50;
			salario_exc = excesso * valor_exc;
			salario = 50 * valor_hora;
		} else {
			salario = numero_horas * valor_hora;
		}
		
		// Saídas
		System.out.printf("Salário: R$%.2f\n", salario);
		System.out.printf("Salário extra: R$%.2f\n", salario_exc);
		System.out.printf("Salário total: R$%.2f\n", (salario + salario_exc));
		
		input.close();
	}
}