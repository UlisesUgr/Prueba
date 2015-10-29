//ULISES
#include<stdio.h>
#include<stdlib.h>
int main(){
	int edad=0;
	printf("HOLA!!\n");
	printf("Empecemos!!, por favor escribe tu edad: ");
	scanf("%d",&edad);
	if(edad!=0 && edad>=1000){
		printf("NO SEAS PAYASO");
	}else
	{
		printf("Hola!!, me he dado cuenta que tienes:%d ",edad );
		
	}
	printf("\n Tu edad es:%d ",edad);
	printf("\n =D)");
}
