#include <stdio.h>
#include <stdlib.h>


float P (float a,float b){
	float pre;
	pre = a/b;
	
	return pre;
}

int main(){
	
	int a,b;
	float presion;
	
	printf("\n Ingrese fuerza: ");
	scanf("%d",&a);
	printf("\n Ingrese area: ");
	scanf("%d",&b);
	
	presion= P(a,b);
	
	printf("\n La presion es de: %f",presion);	
		
	system ("pause");
	
	return 0;
}
	
	
