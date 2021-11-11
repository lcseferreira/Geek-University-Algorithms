# -*- coding: UTF-8 -*-

num_tabuada = int(input("Digite um número entre 1 e 10 para gerar uma tabuada: "))

while num_tabuada > 10 or num_tabuada < 1:
    print("Entrada inválida")
    num_tabuada = int(input("Digite um número entre 1 e 10 para gerar uma tabuada: "))

print("Tabuada do {0}".format(num_tabuada))
for i in range(1, 11):
    print("{0} x {1} = {2}".format(num_tabuada, i, num_tabuada * i))