package br.com.geek.sec2;

import java.util.Scanner;

public class Exercicio2 {

	public static void main(String[] args) {
		
		int num1, num2, soma, multiplicacao;
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Informe o primeiro n�mero: ");
		num1 = input.nextInt();
		
		System.out.print("Informe o segundo n�mero: ");
		num2 = input.nextInt();
		
		soma = num1 + num2;
		multiplicacao = soma * num1;
		
		System.out.println("O resultado da multiplica��o � " + multiplicacao);
		
		input.close();
	}
}
