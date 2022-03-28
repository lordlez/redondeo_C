#include "header.h"

int redondeo(float numero, int cantDecimal)
{
    int numEntero, resto;
    numEntero = (numero*(pow(10,cantDecimal+1)));
    resto = numEntero % 10;
    numEntero = numEntero / pow(10,cantDecimal+1);
    if(resto >= 5)
    {
        numEntero += 1;
    }
    return numEntero;
}
