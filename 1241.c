/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur Hideaki Uehara
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 07/05/2026
Objetivo    : determinar se um número encaixa no outro, ou seja, se o segundo valor aparece no final do primeiro
Aprendizado : utilização de string em línguagem c
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char A[1001], B[1001];
    
    while (N--) {
        scanf("%s %s", A, B);
        
        int tamA = strlen(A);
        int tamB = strlen(B);
        
        if (tamB > tamA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(A + (tamA - tamB), B) == 0) {
                printf("encaixa\n");
           } else {
                printf("nao encaixa\n");
        }
    }
  }
}
