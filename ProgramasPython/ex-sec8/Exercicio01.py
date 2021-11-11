# -*- coding: UTF-8 -*-

vetor = []
pares = []

for i in range(1, 6):
    n = int(input("Digite um número: "))
    vetor.append(n)
    if n > 0 and n % 2 == 0:
        pares.append(n)

for p in pares:
    print(p)