# -*- coding: UTF-8 -*-
n1 = int(input("Digite um número: "))
n2 = int(input("Digite um número: "))
n3 = int(input("Digite um número: "))
n4 = int(input("Digite um número: "))

q1 = n1 ** 2
q2 = n2 ** 2
q3 = n3 ** 2
q4 = n4 ** 2

if q3 >= 1000:
    print(f"Número: {n3}, Quadrado: {q3}")
else:
    print(f"Número: {n1}, Quadrado: {q1}")
    print(f"Número: {n2}, Quadrado: {q2}")
    print(f"Número: {n3}, Quadrado: {q3}")
    print(f"Número: {n4}, Quadrado: {q4}")