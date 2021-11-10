package br.com.geek.sec8;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Exercicio06 {

	public static void main(String[] args) {
		
		List<Integer> vetor = new ArrayList<>();
		int codigo; 
		Scanner input = new Scanner(System.in);
		
		vetor.add(1);
		vetor.add(2);
		vetor.add(3);
		vetor.add(4);
		vetor.add(5);
		
		System.out.println("Digite um c�digo: ");
		codigo = input.nextInt();
		
		if (codigo == 1) {
			for (Integer numero : vetor) {
				System.out.println(numero);
			}
		} else if (codigo == 2) {
			for (int i = 4; i >= 0; i--) {
				System.out.println(vetor.get(i));
			}
		} else if (codigo == 0) {
			System.out.println("Fim!");
		} else {
			System.out.println("C�digo inv�lido!");
		}
		
		input.close();
	}

}
