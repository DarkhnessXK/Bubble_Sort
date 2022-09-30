#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i, vet[8];

void bubble_crescente (){
	int j,aux=0;
	
	for(i=0;i<8;i++){
		
	
	for(j=0;j<8-1-i;j++){
		
		if(vet[j] > vet[j+1]){
			aux = vet[j];
			vet[j] = vet[j+1];
			vet[j+1] = aux;		}
	}
}	
	
}

void bubble_decrescente (){
	int j,aux=0;
	
	for(i=0;i<8;i++){
		
	
	for(j=0;j<8-1-i;j++){
		
		if(vet[j] < vet[j+1]){
			aux = vet[j];
			vet[j] = vet[j+1];
			vet[j+1] = aux;		}
	}
}	
	
}
int main(){
	//int vet[8];
	
	//bubble crescente
	printf("\ndigite numeros para o vetor de 8 posicoes os ordenar\n");
	for(i=0;i<8;i++){
	printf("\nvetor[%i] = ",i);
	scanf("%i",&vet[i]);
		}
		printf("\na ordem crescente destes vetores e: \n");
		bubble_crescente();
		for(i=0;i<8;i++){
			printf("\nvetor[%i]: %i \n",i,vet[i]);
		}
		
	//bubble decrescente
	printf("\na ordem decrescente destes vetores e: \n");
		bubble_decrescente();
		for(i=0;i<8;i++){
			printf("\nvetor[%i]: %i \n",i,vet[i]);
		}
	
	

	getch();
	system("cls");
	return 0;
}
