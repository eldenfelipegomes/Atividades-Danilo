#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float centigrados, fahr;
	int  c = 167;
	
	printf("Digite uma temperatura em %cC : ", c);
	
	scanf("%f", &centigrados);
	
	fahr = centigrados*(9.0/5.0)+32;
	
	printf("%3.f%cC e o mesmo que %3.f%cF", centigrados, c, fahr,c );
}