package br.com.geek.sec6;

import java.util.Scanner;

public class Exercicio05 {

	public static void main(String[] args) {
		
		float peso, excesso = 0, multa = 0;
		Scanner input = new Scanner(System.in);
		
		System.out.println("Digite o peso dos peixes: ");
		peso = input.nextFloat();
		
		if (peso > 50) {
			excesso = peso - 50;
			multa = excesso * 4;
			System.out.printf("Peso: %.2f\n"
					+ "Multa: %.2f\n"
					+ "Excesso: %.2f\n", 
					peso, multa, excesso);
		} else {
			System.out.printf("Peso: %.2f\n"
					+ "Multa: %.2f\n"
					+ "Excesso: %.2f\n", 
					peso, multa, excesso);
		}
		
		input.close();
	}

}
