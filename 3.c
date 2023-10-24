#include <stdio.h>

float converter(float fahrenheit) {
    float celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    return celsius;
}

int main() {
    float temperaturaF;
    float temperaturaC;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &temperaturaF);

    temperaturaC = converter(temperaturaF);

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperaturaF, temperaturaC);

    return 0;
}