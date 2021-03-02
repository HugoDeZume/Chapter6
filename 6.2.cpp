#include<conio.h>
#include<stdio.h>

int main(){
	float cal;
	printf("Ingrese la calificacion: ");
	scanf("%f",&cal);
	if(cal<0||cal>100){
		printf("Ingrese una calificacion valida (entre 0 y 100)");
		
	}else{
		if(0<=cal&&cal<=60){
			printf("The grade is F");
		}else if(60<cal&&cal<=70){
			printf("The grade is D");
		}else if(70<cal&&cal<=80){
			printf("The grade is C");
		}else if(80<cal&&cal<=90){
			printf("The grade is B");
		}else if(90<cal&&cal<=100){
			printf("The grade is B");
		}
	}
	return 0;
}
