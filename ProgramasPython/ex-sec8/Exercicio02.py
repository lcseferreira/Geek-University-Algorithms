# -*- coding: UTF-8 -*-

vetor1 = []
vetor2 = []
soma = []

for i in range(0, 10):
    vetor1.append(int(input("Digite um valor: ")))
    vetor2.append(int(input("Digite outro valor: ")))
    soma.append(vetor1[i] + vetor2[i])
    
for v in soma:
    print(v)
    
    