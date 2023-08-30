#include <stdio.h>
#include <stdlib.h>

int P (int a, int b){
	int per;
	per=(2*a) + (2*b);
	
	return per;
}
int A (int a, int b){
	int ar = 0;
	ar= a*b;
		
	return ar;	
}
		
		
int main(){
	
	int a,b, area,perimetro; 
	
	printf("\n Ingrese valor de A: ");
	scanf ("%d",&a);
	printf ("\n ingrese valor de B: ");
	scanf ("%d",&b);
	
	area= P(a,b);
	perimetro= A(a,b);
	
	printf("\n el area es de: %d",area);
	printf("\n el perimetroes de: %d",perimetro);
	
	system("pause");
	return 0;
}
	
	
		
