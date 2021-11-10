package br.com.geek.sec8;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Exercicio03 {

	public static void main(String[] args) {
		
		List<Integer> vetor = new ArrayList<>();
		Scanner input = new Scanner(System.in);
		
		for (int i = 0; i < 10; i++) {
			System.out.println("Digite um valor: ");
			vetor.add(input.nextInt());
		}
		
		for (int i = (vetor.size() - 1); i >= 0; i--) {
			System.out.println(vetor.get(i));
		}
				
		input.close();
	}

}
