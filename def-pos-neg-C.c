//fun��o: Definir se o valor inserido � positivo ou negativo
//autor: Jo�o C�ndido

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int valor, a, b;
	
	printf("Inserir valor: ");
	scanf("%d", &valor);
	
	if (valor > 0){
		a = valor;
		printf("%d � um valor positivo", a);
	}else{
		b = valor;
		printf("%d � um valor negativo", b);
	}
return 0;
}
