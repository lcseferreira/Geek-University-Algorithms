# -*- coding: UTF-8 -*-

maior = -999
menor = 999
soma = 0

for i in range(1, 11):
    valor = int(input("Digite um valor: "))
    
    if valor > maior:
        maior = valor
    if valor < menor:
        menor = valor
    
    soma += valor
    
media = soma / 10

print(f"Maior: {maior}")
print(f"Menor: {menor}")
print(f"Media: {media}")
