#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float n1, n2;
	
	printf("Digite um valor: ");
	
	scanf("%f", &n1);
	 
	n2 = n1/4; //divide o valor de n1 em 5 partes
	
	printf("%2.f e a quarta parte de %2.f", n2, n1);
    }