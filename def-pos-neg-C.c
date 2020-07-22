//função: Definir se o valor inserido é positivo ou negativo
//autor: João Cândido

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int valor, a, b;
	
	printf("Inserir valor: ");
	scanf("%d", &valor);
	
	if (valor > 0){
		a = valor;
		printf("%d é um valor positivo", a);
	}else{
		b = valor;
		printf("%d é um valor negativo", b);
	}
return 0;
}
