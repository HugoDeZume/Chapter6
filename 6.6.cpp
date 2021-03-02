#include<stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;
int main (){
	int horas,valor,salario,resultado2,resultado3,st,total1;
	float st2,st3,total;
	
	salario=20;
	
	printf("Ingrese la cantidad de horas trabajadas en la semana: ");
	scanf("%d",&horas);
	valor=40;
	div_t resultado;
	resultado = div(horas,valor);
	resultado2=resultado.rem;
	resultado3=resultado.quot;
	
	if(horas<=40){
		total1=salario*horas;
		printf("El salario semanal es: %d pesos",total1);
	}else{
		st=40*salario;
		st2=resultado2*1.5;
		st3=st2*salario;
		total=st+st3;
		printf("El salario semanal es: %.0f pesos",total);
	
	}
	
	
	
}
