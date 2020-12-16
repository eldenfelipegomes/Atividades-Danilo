#include <stdio.h>
#include <stdlib.h>

main(){
    float real, dolar, cotação;
    printf("Insira o valor em dolar: ");
    scanf("%f", &dolar);
    printf("Insira o valor da cotação: ");
    scanf("%f", &cotação);
    real = dolar * cotação;
    printf("O valor em reais é de: %f", real); 

}