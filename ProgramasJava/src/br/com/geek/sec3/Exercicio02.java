package br.com.geek.sec3;

import java.util.Scanner;

public class Exercicio02 {

	public static void main(String[] args) {
		
		int qtd_minima, qtd_maxima;
		float media;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Digite a quantidade m�nima: ");
		qtd_minima = input.nextInt();
		
		System.out.println("Digite a quantidade m�xima: ");
		qtd_maxima = input.nextInt();
		
		media = (qtd_maxima + qtd_minima) / 2;
		
		System.out.println("A m�dida � " + media);
		
		input.close();
	}

}
