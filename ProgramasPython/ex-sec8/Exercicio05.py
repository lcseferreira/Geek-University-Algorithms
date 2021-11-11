# -*- coding: UTF-8 -*-

vetor = []
maior_que_50 = False

for i in range(0, 10):
    vetor.append(int(input("Digite um valor: ")))
    
for v in vetor:
    if v > 50:
        print(f"Valor {v}, Posição {vetor.index(v) + 1}")
        maior_que_50 = True
    
if maior_que_50 == False:
    print("Não existem valores maiores que 50")