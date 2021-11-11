# -*- coding: UTF-8 -*-

codigo = int(input("Digite um código: "))
vetor = []

if codigo > 0 and codigo < 3:
    for i in range(0, 5):
        vetor.append(int(input("Digite um valor: ")))
    
    if codigo == 1:
        for i in vetor:
            print(i)
    if codigo == 2: 
        vetor.reverse()
        for i in vetor:
            print(i)
            
elif codigo == 0:
    print("Programa finalizado")
else:
    print("Entrada inválida")