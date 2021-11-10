package br.com.geek.sec8;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Exercicio05 {

	public static void main(String[] args) {
		
		List<Integer> vetor = new ArrayList<>();
		boolean maior_que_50 = false;
		Scanner input = new Scanner(System.in);
		
		for (int i = 0; i < 10; i++) {
			System.out.println("Digite um valor: ");
			vetor.add(input.nextInt());
		}
		
		
		for (Integer n : vetor) {
			if (n > 50) {
				System.out.printf("Número %d na posição %d\n", n, vetor.indexOf(n));
				maior_que_50 = true;
			}
		}
		
		if (!maior_que_50) {
			System.out.println("Não existe valores maiores que 50!");
		}
				
		input.close();
	}

}
