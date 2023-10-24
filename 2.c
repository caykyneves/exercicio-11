#include <stdio.h>

void imprimirMes(int numero) {
    switch (numero) {
        case 1:
            printf("Janeiro: 31 dias\n");
            break;
        case 2:
            printf("Fevereiro: 28 ou 29 dias\n");
            break;
        case 3:
            printf("Marco: 31 dias\n");
            break;
        case 4:
            printf("Abril: 30 dias\n");
            break;
        case 5:
            printf("Maio: 31 dias\n");
            break;
        case 6:
            printf("Junho: 30 dias\n");
            break;
        case 7:
            printf("Julho: 31 dias\n");
            break;
        case 8:
            printf("Agosto: 31 dias\n");
            break;
        case 9:
            printf("Setembro: 30 dias\n");
            break;
        case 10:
            printf("Outubro: 31 dias\n");
            break;
        case 11:
            printf("Novembro: 30 dias\n");
            break;
        case 12:
            printf("Dezembro: 31 dias\n");
            break;
        default:
            printf("Numero invalido. Insira um numero entre 1 e 12.\n");
    }
}

int main() {
    int numero;
    
    printf("Insira um numero de 1 a 12: ");
    scanf("%d", &numero);
    
    imprimirMes(numero);
    
    return 0;
}