package br.com.geek.sec3;

import java.util.Scanner;

public class Exercicio02 {

	public static void main(String[] args) {
		
		int qtd_minima, qtd_maxima;
		float media;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Digite a quantidade mínima: ");
		qtd_minima = input.nextInt();
		
		System.out.println("Digite a quantidade máxima: ");
		qtd_maxima = input.nextInt();
		
		media = (qtd_maxima + qtd_minima) / 2;
		
		System.out.println("A médida é " + media);
		
		input.close();
	}

}
