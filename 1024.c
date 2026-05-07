/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur Hideaki Uehara
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1024
Data        : 07/05/2026
Objetivo    : criptografar mensagens alterando a tabela ASCII
Aprendizado : utilização de string e tabela ASCII em línguagem  c
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    while (N--) {
        char str[1100];
        fgets(str, sizeof(str), stdin);

        int len = strlen(str);

        if (str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        for (int i = 0; i < len; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')) {
                str[i] += 3;
            }
        }

        for (int i = 0; i < len / 2; i++) {
            char temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }

        for (int i = len / 2; i < len; i++) {
            str[i] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
