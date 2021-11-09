package br.com.geek.sec3;

import java.util.Scanner;

public class Exercicio05 {

	public static void main(String[] args) {
		
		float metros, cm;
		Scanner input = new Scanner(System.in);	
		
		System.out.println("Digite um valor em metros: ");
		metros = input.nextFloat();
		
		cm = metros * 100;
			
		System.out.println(metros + " metro(s) equivale(m) a " + cm + " cm");
		
		input.close();
	}
}
