package br.com.geek.sec6;

import java.util.Scanner;

public class Exercicio06 {

	public static void main(String[] args) {
		
		// Declara��o de vari�veis
		int numero_horas;
		float valor_hora = 10, valor_exc = 20, excesso = 0, salario_exc = 0, salario;
		Scanner input = new Scanner(System.in);
		
		// Entradas
		System.out.println("Digite o n�mero de horas trabalhadas: ");
		numero_horas = input.nextInt();
		
		// Processamento
		if (numero_horas > 50) {
			excesso = numero_horas - 50;
			salario_exc = excesso * valor_exc;
			salario = 50 * valor_hora;
		} else {
			salario = numero_horas * valor_hora;
		}
		
		// Sa�das
		System.out.printf("Sal�rio: R$%.2f\n", salario);
		System.out.printf("Sal�rio extra: R$%.2f\n", salario_exc);
		System.out.printf("Sal�rio total: R$%.2f\n", (salario + salario_exc));
		
		input.close();
	}
}