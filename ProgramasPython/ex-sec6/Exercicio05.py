# -*- coding: UTF-8 -*-
p = int(input("Digite o peso dos peixes: "))
e = 0
m = 0.00

if p > 50: 
    e = p - 50;
    m = e * 4

print(f"Peso: {p}kg \nExcesso: {e}kg \nMulta: R${m:.2f}")