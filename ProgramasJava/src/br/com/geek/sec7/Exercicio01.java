package br.com.geek.sec7;

import java.util.Scanner;

public class Exercicio01 {

	public static void main(String[] args) {
		
		int n, maior = -999; 
		Scanner input = new Scanner(System.in);
		
		System.out.println("Digite um n�mero ou 0 para sair: ");
		n = input.nextInt();
		
		while (n != 0) {
			if (n > maior) {
				maior = n;
			}
			
			System.out.println("Digite um n�mero ou 0 para sair: ");
			n = input.nextInt();
		}

		System.out.println("O maior n�mero foi o " + maior);
		input.close();
	}

}
