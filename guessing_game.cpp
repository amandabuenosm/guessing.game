#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // iniciar gerador de número com tempo atual

    // gerar número entre 1 e 30
    int num = rand() % 30 + 1; 
    int chance;
    int contChance = 0;

    printf("BEM-VINDO AO JOGO DE ADIVINHAÇÃO!\n");
    printf("Tente adivinhar o número entre 1 e 30!\n");

    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &chance);
        contChance++;

        if (chance > 30) {
            printf("\nERRO: Opção inválida! Tente um número entre 1 e 30!\n");
        } else if (chance > num) {
            printf("\nO número oculto é menor!\n");
        } else if (chance < num) {
            printf("\nO número oculto é maior!\n");
        } else {
            printf("\nPARABÉNS! Você acertou o número depois de %d tentativas.\n", contChance);
        }
    } while (chance != num);
    return 0;
}
