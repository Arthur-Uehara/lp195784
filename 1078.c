/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur Hideaki Uehara
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1078
Data        : 29/04/2026
Objetivo    : Montar a tabuada de um número
Aprendizado : Utilização do if e for dentro da linguagem c
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N;

    if (scanf("%d", &N) == 1) {
        
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, N, i * N);
        }
    }

    return 0;
}
