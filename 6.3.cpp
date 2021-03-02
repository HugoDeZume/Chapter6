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
			if(0<=cal&&cal<=53){
				printf("The grade is F-");
			}else if(54<=cal&&cal<=57){
				printf("The grade is F");
			}else if(58<=cal&&cal<=60){
				printf("The grade is F+");
			}
			
			
		}else if(60<cal&&cal<=70){
			if(61<=cal&&cal<=63){
				printf("The grade is D-");
			}else if(64<=cal&&cal<=67){
				printf("The grade is D");
			}else if(68<=cal&&cal<=70){
				printf("The grade is D+");
			}
			
			
		}else if(70<cal&&cal<=80){
			
			if(71<=cal&&cal<=73){
				printf("The grade is C-");
			}else if(74<=cal&&cal<=77){
				printf("The grade is C");
			}else if(78<=cal&&cal<=80){
				printf("The grade is C+");
			}
			
		}else if(80<cal&&cal<=90){
			
			if(81<=cal&&cal<=83){
				printf("The grade is B-");
			}else if(84<=cal&&cal<=87){
				printf("The grade is B");
			}else if(88<=cal&&cal<=90){
				printf("The grade is B+");
			}
			
		}else if(90<cal&&cal<=100){
			
			if(91<=cal&&cal<=93){
				printf("The grade is A-");
			}else if(94<=cal&&cal<=97){
				printf("The grade is A");
			}else if(98<=cal&&cal<=100){
				printf("The grade is A+");
			}
		}
	}
	return 0;
}
