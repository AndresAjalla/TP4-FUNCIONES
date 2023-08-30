#include <stdio.h>
#include <stdlib.h>


float Hombres (float a,float b) {
	float porHombres;
	int cant;
	cant=a+b;
	porHombres= (100*a)/cant;
	
	return porHombres;

}
float Mujeres (float a, float b) {
		float porMujeres;
		int cant;
		cant=a+b;
		porMujeres= (100*b)/cant;
		
		return porMujeres;
	}
	
int main(){
	
	
	int a,b;
	float PorcentajeDeMujeres,PorcentajeDeHombres;
	
	printf ("\n Ingrese cantidad de hombres: ");
	scanf ("%d",&a);
	printf ("\n Ingrese cantidad de mujeres: ");
	scanf ("%d",&b);
	
	PorcentajeDeHombres= Hombres(a,b);
	PorcentajeDeMujeres= Mujeres(a,b);
	
	printf("\n Porcentaje de Hombres: %f",PorcentajeDeHombres);
	printf("\n Porcentaje de Mujeres: %f",PorcentajeDeMujeres);
	
	system ("pause");
	
	return 0;
}
	
	
	
