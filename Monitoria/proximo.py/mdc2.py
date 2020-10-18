
'''ENUNCIADO

Desenvolva um pequeno programa que receba dois números inteiros positivos e não-nulos, determine o Máximo Divisor Comum (MDC) destes números, e mostre-o na tela.

Atenção: seu programa deve validar cada uma das duas entradas. Isso significa que, caso o usuário digite um número inteiro inválido (ou seja, negativo ou nulo), o programa deve pedir novamente e imediatamente para o usuário digitar esse número, até que seja digitado um número válido.

 

ENTRADAS:

Dois números inteiros positivos e não-nulos (um de cada vez).

 

SAÍDA:

O MDC dos dois números.

 

EXEMPLOS

Para a entrada:

70

25 

A saída é

5

 

Para a entrada:

100

7  

A saída é:

1



Para a entrada:

15

-1

0

3

A saída é:

3



Para a entrada: 

144 

12

A saída é:

12
'''
#Algoritmo de Euclides
numero1 = int(input())
while(numero1 < 1):
    numero1 = int(input())
numero2 = int(input())
while(numero2 < 1):
    numero2 = int(input())
while(numero2):
    resto = numero1 % numero2
    numero1 = numero2
    numero2 = resto
print(numero1)