package br.com.geek.sec8;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Exercicio02 {

	public static void main(String[] args) {
		
		List<Integer> vetor1 = new ArrayList<>();
		List<Integer> vetor2 = new ArrayList<>();
		List<Integer> vetor3 = new ArrayList<>();
		Scanner input = new Scanner(System.in);
		
		for (int i = 0; i < 10; i++) {
			System.out.println("Digite um valor para o primeiro vetor: ");
			vetor1.add(input.nextInt());
			
			System.out.println("Digite um valor para o segundo vetor: ");
			vetor2.add(input.nextInt());
			
			vetor3.add(vetor1.get(i) + vetor2.get(i));
		}
		
		for (Integer valor : vetor3) {
			System.out.println(valor);
		}
				
		input.close();
	}

}
