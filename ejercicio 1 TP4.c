#include <stdio.h>
#include <stdlib.h>


int mostrar (int a, int b){
	int imp;
	printf ("\n %d",a);
	printf ("\n %d",b);
	
	return imp;
}



int main(){
	int a,b,imprimir;
	
	printf("\n Ingrese un numero: ");
	scanf("%d",&a);
	printf("\n Ingrese otro numero: ");
	scanf("%d",&b);
	
	imprimir = mostrar(a,b);
	
	system("pause");
	
	return 0;
}
	
	
	
	
	
	
