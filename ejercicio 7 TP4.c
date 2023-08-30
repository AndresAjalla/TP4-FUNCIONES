#include <stdio.h>
#include <stdlib.h>


int Num (int a, int b){
	int mayor, menor;
	if (a>b) {
		printf("\n %d es mayor a %d",a,b);
	}
	else if (b>a) {
		printf("\n %d es mayor a %d",b,a);
	}
	else {
		printf("\n Ambos numeros son iguales");
		printf("\n %d = %d",a,b);
	}
	return mayor;
}

int main(){
	
	int a,b,numero;
	
	printf ("\n Ingrese un numero: ");
	scanf ("%d",&a);
	printf ("\n Ingrese un numero: ");
	scanf ("%d",&b);
	
	numero= Num(a,b);
	

	system ("pause");
	
	return 0;
}
