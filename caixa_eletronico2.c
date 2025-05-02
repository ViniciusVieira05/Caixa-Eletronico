#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    int opcoes, saldo;
    float valor;

    saldo = 1000;

    do
    {

        printf("\nMENU DE OPÇÕES\n1 -------- DEPOSITO\n2 -------- SAQUE\n3 --------- SALDO\n4 -------- SAIR\n");
        printf("Digite a sua opção: ");
        scanf("%d", &opcoes);

        switch (opcoes)
        {
        case 1:
            printf("Digite a quantidade que você deseja depositar: R$");
            scanf("%f", &valor);
            printf("\nValor de R$%.2f depositado.\n", valor);
            saldo = saldo + valor;
            break;
        case 2:
            printf("Digite a quantidade a ser sacada: ");
            scanf("%f", &valor);
            if (valor > saldo){
                printf("\nSALDO INSUFICIENTE!!!");
            }
            else{
                printf("\nValor de R$%.2f sacado.\n", valor);
            saldo = saldo - valor;
            }
            break;
        case 3:
            printf("\nO seu saldo atual é de R$%d\n", saldo);
            break;
        default:
            if (opcoes != 4){
                printf("\nOPÇÃO INVÁLIDA!!! DIGITE UMA OPÇÃO CORRETA\n");
            }
            break;
        }
    } while (opcoes != 4);
    printf("\nSAINDO...");
 
    return 0;
}