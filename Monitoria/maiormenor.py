'''ENUNCIADO
 

Escreva um programa que leia primeiramente um número inteiro n, e então uma sequência de n números inteiros, um de cada vez. Seu programa deve calcular o menor e o maior elemento dessa sequência de n inteiros, exibindo-os na tela, respectivamente e nesta ordem.

Exemplo:

Sejam as entradas:

5

3

4

2

1

-6

A saída correta seria:

-6

4
'''
quantidadeDeNumeros = int(input())
for i in range(0, quantidadeDeNumeros):
    numeroInformado = int(input())
    if(not(i)):
        maior = numeroInformado
        menor = numeroInformado
    else:
        if(maior < numeroInformado):
            maior = numeroInformado
        if(menor > numeroInformado):
            menor = numeroInformado
print(menor)
print(maior)