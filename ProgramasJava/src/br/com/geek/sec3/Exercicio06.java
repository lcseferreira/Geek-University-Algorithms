package br.com.geek.sec3;

import java.util.Scanner;

public class Exercicio06 {

	public static void main(String[] args) {
		
		float valor_hora, salario;
		int horas_trabalhadas;	
		Scanner input = new Scanner(System.in);	
		
		System.out.println("Digite o valor da sua hora: ");
		valor_hora = input.nextFloat();
		
		System.out.println("Digite quantas horas voc� trabalha por m�s: ");
		horas_trabalhadas = input.nextInt();
		
		salario = valor_hora * horas_trabalhadas;
			
		System.out.println("Seu sal�rio ser� de R$" + salario);
		
		input.close();
	}
}
