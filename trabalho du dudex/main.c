#include <stdlib.h>
#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}
int arranjo(int n, int p) {
    return fatorial(n) / fatorial(n - p);
}


int permutacao(int n) {
    return fatorial(n);
}


int combinacao(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}


void trianguloPascal(int linhas) {
    for (int i = 0; i < linhas; i++) {
    for (int j = 0; j <= i; j++) {
            printf("%5d", combinacao(i, j));
        }
        printf("\n");
    }
}

int main() {
    int opcao, n, p;

    do {
        printf("\n TRABALHO DE COMPLEMENTACAO \n");
        printf("1 - Triangulo de Pascal\n");
        printf("2 - Arranjo Simples\n");
        printf("3 - Permutacao Simples\n");
        printf("4 - Combinacao Simples\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Quantas linhas (1 a 13)? ");
        scanf("%d", &n);
        trianguloPascal(n);
        }
    else if (opcao == 2) {
        printf("Digite n: ");
        scanf("%d", &n);
        printf("Digite p: ");
        scanf("%d", &p);
    if (p > n) {

        printf("Erro: p nao pode ser maior que n.\n");
        } else {
        printf("A(%d,%d) = %d\n", n, p, arranjo(n, p));
            }
        }
    else if (opcao == 3) {
        printf("Digite n: ");
        scanf("%d", &n);
        printf("P(%d) = %d\n", n, permutacao(n));
        }
    else if (opcao == 4) {
        printf("Digite n: ");
        scanf("%d", &n);
        printf("Digite p: ");
        scanf("%d", &p);
    if (p > n) {
            printf("Erro: p nao pode ser maior que n.\n");
        } else {
        printf("C(%d,%d) = %d\n", n, p, combinacao(n, p));
            }
        }
    else if (opcao == 0) {
            printf("Fim do programa!\n");
        }
    else {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
