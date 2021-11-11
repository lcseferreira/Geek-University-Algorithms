# -*- coding: UTF-8 -*-
n = int(input("Digite o número de horas trabalhadas: "))
valor_hora = 10.00
hora_exc = 0

if n > 50:
    hora_exc = n - 50
    salario_ext = hora_exc * 20
    salario_ini = 50 * valor_hora
else:
    salario_ini = n * valor_hora
    salario_ext = 0

print(f"Salário inicial: R$ {salario_ini:.2f}")    
print(f"Salário extra: R$ {salario_ext:.2f}")    
print(f"Salário total: R$ {(salario_ini + salario_ext):.2f}")    