#include <stdio.h>
#include <stdlib.h>

int resistencias (int a,int b,int c,int d,int e){
	int rt;
	rt= a+b+c+d+e;
	
	return rt;
}
int main(){
	
	int a,b,c,d,e,RT;
	
	printf("\n Ingrese R1: ");
	scanf("%d",&a);
	printf("\n Ingrese R2: ");
	scanf("%d",&b);
	printf("\n Ingrese R3: ");
	scanf("%d",&c);
	printf("\n Ingrese R4: ");
	scanf("%d",&d);
	printf("\n Ingrese R5: ");
	scanf("%d",&e);
	
	RT=resistencias(a,b,c,d,e);
	
	printf("\n RESULTADOS");
	printf("\n R1: %d",a);
	printf("\n R2: %d",b);
	printf("\n R3: %d",c);
	printf("\n R4: %d",d);
	printf("\n R5: %d",e);
	printf("\n RT: %d",RT);
	
	system ("pause");
	
	return 0;
}
	
	
		
		
