#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("==============================================================\n");
	printf("                          Atividade\n");
	printf("==============================================================\n");
	int cont = 1, soma = 0, maior, menor, Ninserido, quantidadeN;
	printf("Digite quantos numeros serao inseridos: \n");
	scanf("%d", &quantidadeN);
	while (cont <= quantidadeN){
	    printf("Insira o numero: \n");
	    scanf("%d", &Ninserido);
	    if (cont == 1){
	        maior = Ninserido;
	        menor = Ninserido;
	    }else
	        if (Ninserido > maior){
	            maior = Ninserido;
	        }
	        if (Ninserido < menor){
	            menor = Ninserido;
	    }
	
	    soma = soma + Ninserido;
	    cont = cont + 1;
    }
    printf("==============================================================\n");
	printf("                    Resultado do Programa\n");
	printf("     Maior: %d | Menor: %d | soma: %d \n", maior, menor, soma);
	printf("==============================================================\n");
system("PAUSE");
return(0);
}
