package br.com.geek.sec8;

import java.util.Scanner;

public class Exercicio01 {

	public static void main(String[] args) {
		
		int[] vetor = new int[5], pares = new int[5];
		Scanner input = new Scanner(System.in);
		
		for (int i = 0; i < 5; i++) {
			System.out.println("Digite um valor: ");
			vetor[i] = input.nextInt();
			
			if ((vetor[i] > 0) && (vetor[i] % 2 == 0)) {
				pares[i] = vetor[i]; 
				continue;
			}
			
			pares[i] = 0;
		}
		
		for (int i = 0; i < 5; i++) {
			if (pares[i] != 0) {
				System.out.println(pares[i]);
			}
		}
		
		input.close();
	}

}
