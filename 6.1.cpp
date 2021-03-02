#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	float x,y,x1,y1,x2,y2,x3,y3,distance;
	char dis[100];
	printf("Ingrese el lugar del primer punto de la forma x y: ");
	fgets(dis,sizeof(dis),stdin);
	sscanf(dis,"%f %f",&x1,&y1);
	
	printf("Ingrese el lugar del segundo punto de la forma x y: ");
	fgets(dis,sizeof(dis),stdin);
	sscanf(dis,"%f %f",&x2,&y2);
	
	x=x2-x1;
	y=y2-y1;
	x3=pow(x,2);
	y3=pow(y,2);
	distance=sqrt(x3+y3);
	printf("%f",distance);
	
	
	return 0;
	
}
