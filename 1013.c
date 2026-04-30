/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur Hideaki Uehara
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 29/04/2026
Objetivo    : Descubrir o maior entre três números
Aprendizado : Utilização das contas e do absoluto em linguagem c
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, maiorAB, maior;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;

    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
