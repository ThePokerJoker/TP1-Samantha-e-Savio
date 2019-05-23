#include <stdio.h>

int main() {
	printf("Digite um numero de 1 a 2:");
	int x;
	scanf("%d",&x);
	
	if(x==1){
		printf("	Janeiro");
	}
	if(x==2){
		printf("	Fevereiro");
	}
		
	while(x<1||x>2){
		printf("*Numero invalido*\nDigite novamente:");
	scanf("%d,",&x);
	}
	return 0;
}


