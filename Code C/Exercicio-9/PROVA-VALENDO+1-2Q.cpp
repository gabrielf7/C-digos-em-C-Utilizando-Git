#include <stdio.h>
#include <stdlib.h>
int main(){
	float valor1, valor2, divisao;
	printf("Digite um valor: ");
	scanf("%f", &valor1);
	printf("Digite um valor: ");
	scanf("%f", &valor2);
	while (valor2 == 0){
		printf("Erro\n");
		printf("Digite um valor maior que 0: ");
	    scanf("%f", &valor2);
	}
	divisao = valor1 / valor2;
	printf("O resultado da divisao foi: %f \n", divisao);
	system("pause");
	return(0);
}
