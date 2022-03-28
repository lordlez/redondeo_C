#include "header.h"

int main()
{
    float numero;
    int cantDecimal, result;
    printf("Ingrese un numero decimal: ");
    scanf("%f", &numero);
    printf("Ingrese la cantidad de decimales a cortar: ");
    scanf("%d", &cantDecimal);
    result = redondeo(numero, cantDecimal);
    printf("El numero redondeado es: %d", result);
    return 0;
}
