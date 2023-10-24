#include <stdio.h>
#include <math.h>

double calcularVolume(double raio, double altura) {
    double pi = 3.1414592; 
    double volume = pi * raio * raio * altura;
    return volume;
}

int main() {
    double raio, altura, volume;

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    volume = calcularVolume(raio, altura);

    printf("O volume do cilindro é %.2lf unidades cubicas.\n", volume);

    return 0;
}