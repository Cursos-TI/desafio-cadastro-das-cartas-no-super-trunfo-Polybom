#include <stdio.h>
#include <string.h>

#define MAXN 64

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void mostrar_resultado(const char pais1[], const char pais2[],
                       const char attr1[], const char attr2[],
                       int p1_attr1, int p1_attr2, int p2_attr1, int p2_attr2) {
    int soma1 = p1_attr1 + p1_attr2;
    int soma2 = p2_attr1 + p2_attr2;

    printf("\n==== Resultado Final ====\n");
    printf("Cartas: 1) %s    2) %s\n\n", pais1, pais2);

    printf("Atributos usados na comparação:\n");
    printf("  1) %s\n", attr1);
    printf("  2) %s\n\n", attr2);

    printf("Valores por atributo:\n");
    printf("  %s -> %s: %d    %s: %d    (Soma: %d)\n",
           pais1, attr1, p1_attr1, attr2, p1_attr2, soma1);
    printf("  %s -> %s: %d    %s: %d    (Soma: %d)\n\n",
           pais2, attr1, p2_attr1, attr2, p2_attr2, soma2);

    if (soma1 > soma2) {
        printf("VENCEDOR: Carta 1 (%s) com %d pontos contra %d.\n", pais1, soma1, soma2);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: Carta 2 (%s) com %d pontos contra %d.\n", pais2, soma2, soma1);
    } else {
        printf("EMPATE: ambas as cartas têm %d pontos.\n", soma1);
    }

    printf("=========================\n\n");
}

int main() {
    char pais1[MAXN] = "Brasil";
    char pais2[MAXN] = "Argentina";
    char attr1[MAXN] = "Atributo 1";
    char attr2[MAXN] = "Atributo 2";

    int p1_attr1 = 0, p1_attr2 = 0;
    int p2_attr1 = 0, p2_attr2 = 0;

    int opcao;
    int leuValores = 0;

    do {
        printf("=== Menu Principal ===\n");
        printf("1) Mostrar configuração atual\n");
        printf("2) Alterar nomes dos países (cartas)\n");
        printf("3) Alterar nomes dos atributos\n");
        printf("4) Inserir/Alterar valores dos atributos para cada país\n");
        printf("5) Executar comparação e mostrar resultado\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida. Tente novamente.\n");
            limpar_buffer();
            continue;
        }
        limpar_buffer();

        switch (opcao) {
            case 1:
                printf("\n--- Configuração Atual ---\n");
                printf("Carta 1: %s\n", pais1);
                printf("Carta 2: %s\n", pais2);
                printf("Atributo 1: %s\n", attr1);
                printf("Atributo 2: %s\n", attr2);
                if (leuValores) {
                    printf("Valores atuais:\n");
                    printf("  %s -> %s: %d, %s: %d\n", pais1, attr1, p1_attr1, attr2, p1_attr2);
                    printf("  %s -> %s: %d, %s: %d\n", pais2, attr1, p2_attr1, attr2, p2_attr2);
                } else {
                    printf("Valores dos atributos ainda não inseridos.\n");
                }
                printf("--------------------------\n\n");
                break;

            case 2:
                printf("Digite o nome para a Carta 1 (atual: %s): ", pais1);
                if (fgets(pais1, MAXN, stdin) != NULL) {
                    pais1[strcspn(pais1, "\n")] = 0; // remove newline
                    if (strlen(pais1) == 0) strcpy(pais1, "Brasil");
                }
                printf("Digite o nome para a Carta 2 (atual: %s): ", pais2);
                if (fgets(pais2, MAXN, stdin) != NULL) {
                    pais2[strcspn(pais2, "\n")] = 0;
                    if (strlen(pais2) == 0) strcpy(pais2, "Argentina");
                }
                printf("Nomes atualizados.\n\n");
                break;

            case 3:
                printf("Digite o nome do Atributo 1 (atual: %s): ", attr1);
                if (fgets(attr1, MAXN, stdin) != NULL) {
                    attr1[strcspn(attr1, "\n")] = 0;
                    if (strlen(attr1) == 0) strcpy(attr1, "Atributo 1");
                }
                printf("Digite o nome do Atributo 2 (atual: %s): ", attr2);
                if (fgets(attr2, MAXN, stdin) != NULL) {
                    attr2[strcspn(attr2, "\n")] = 0;
                    if (strlen(attr2) == 0) strcpy(attr2, "Atributo 2");
                }
                printf("Atributos atualizados.\n\n");
                break;

            case 4:
                printf("Inserir valores (inteiros) para %s:\n", pais1);
                printf("  %s: ", attr1);
                while (scanf("%d", &p1_attr1) != 1) {
                    printf("Entrada inválida. Digite um inteiro: ");
                    limpar_buffer();
                }
                limpar_buffer();
                printf("  %s: ", attr2);
                while (scanf("%d", &p1_attr2) != 1) {
                    printf("Entrada inválida. Digite um inteiro: ");
                    limpar_buffer();
                }
                limpar_buffer();

                printf("Inserir valores (inteiros) para %s:\n", pais2);
                printf("  %s: ", attr1);
                while (scanf("%d", &p2_attr1) != 1) {
                    printf("Entrada inválida. Digite um inteiro: ");
                    limpar_buffer();
                }
                limpar_buffer();
                printf("  %s: ", attr2);
                while (scanf("%d", &p2_attr2) != 1) {
                    printf("Entrada inválida. Digite um inteiro: ");
                    limpar_buffer();
                }
                limpar_buffer();

                leuValores = 1;
                printf("Valores registrados com sucesso.\n\n");
                break;

            case 5:
                if (!leuValores) {
                    printf("Ainda não foram inseridos valores dos atributos. Escolha a opcao 4 primeiro.\n\n");
                } else {
                    mostrar_resultado(pais1, pais2, attr1, attr2,
                                      p1_attr1, p1_attr2, p2_attr1, p2_attr2);
                }
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
