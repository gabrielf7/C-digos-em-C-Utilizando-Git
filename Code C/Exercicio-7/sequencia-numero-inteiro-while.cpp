#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numint, soma = 0;
	
	printf("Digite um numero inteiro:  ");
	scanf("%d", &numint);
	
	while( numint != 0 ){
    	soma = soma + numint;
		scanf("%d", &numint);	
    }
    
    printf("Resultado da soma dos numeros inteiros eh: %d \n", soma);
    
    system("PAUSE");
    return 0;
}
