# -*- coding: UTF-8 -*-

vetor = []
soma = 0

for i in range(0, 20):
    vetor.append(i)
    soma += i
    
print(f"A soma do vetor é {sum(vetor)}")
print(f"A soma do vetor é {soma}")