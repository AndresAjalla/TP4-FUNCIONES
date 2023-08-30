#include <stdio.h>
#include <stdlib.h>


float oct(float a){
	float oct;
	oct=a/8;
	
	return oct;
}

int main(){
	
	float a,octavo;
	
	printf ("\n Ingrese un numero: ");
	scanf ("%f",&a);
	
	octavo=oct(a);
	
	
	printf("\n Resultado: %f",octavo);
	
	system ("pause");
	
	return 0;
}
	

		
		
