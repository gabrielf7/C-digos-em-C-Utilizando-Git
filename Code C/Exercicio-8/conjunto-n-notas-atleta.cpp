#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	int cont = 1;
	char nome [30];
	float maior, menor, soma = 0, media, Ninserido;
	printf("Atividade");
	printf("......Nome do Atleta: ");
	scanf("%s", &nome);
	printf("*Nota dos sete jurados*\n");
	while (cont <= 7){
	   printf("Jurado| Nota: \n");
	   scanf("%f", &Ninserido);
	    if (cont == 1){
	        maior = Ninserido;
	        menor = Ninserido;
	    }
		if (Ninserido > maior){
		    maior = Ninserido;
	    }
		if (Ninserido < menor){
	        menor = Ninserido;
	    }
	    soma = soma + Ninserido;
	    cont = cont + 1;
    }
    media = ((soma - menor) - maior)/5;
    /*	for (cont = 1; cont <= listnot; cont++){
	    nota = listnot[cont];
	    printf(" [%d]� Jurado| Nota: %f \n", cont+1, nota);*/
	printf("Resultado do Programa\n");
	printf("Resultado Final\n");
	printf(" | Nome: %s \n | Maior: %f \n | Menor: %f \n | Media: %f \n", nome, maior, menor, media);
	system("PAUSE");
	return(0);
}
