# -*- coding: UTF-8 -*-
valor_hora = float(input("Digite quanto você ganha por hora: "))
horas_trabalhadas = int(input("Digite a quantidade de horas trabalhadas no mês: "))

salario = (valor_hora * horas_trabalhadas)

print(f"Esse mês o seu salário será de R$ {salario:.2f}")