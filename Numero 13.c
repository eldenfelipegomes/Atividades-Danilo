#include <stdio.h>
#include <stdlib.h>


int main()
{
 float saldo;
 printf("Informe o valor do saldo: ");
 scanf("%f",&saldo);
 printf("O saldo corrigido e %4.2f\n\n",saldo * 2.01);
 system("PAUSE");
 return 0;
}
