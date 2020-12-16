#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float num, sqr;
	char c =253;
	
	printf("Digite um valor real: ");
	
	scanf("%f", &num);
	
	sqr = num*num;
	
	printf("%2.f%c e igual a %2.f", num, c, sqr);
}