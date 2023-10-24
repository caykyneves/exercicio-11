#include <stdio.h>
#include <math.h>

double calcularVolume(double raio) {
    double pi = 3.14159265359; // 
    double volume = (4.0 / 3.0) * pi * pow(raio, 3);
    return volume;
}

int main() {
    double raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = calcularVolume(raio);

    printf("O volume da esfera e %.2lf unidades cubicas.\n", volume);

    return 0;
}