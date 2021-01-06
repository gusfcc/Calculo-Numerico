#include <stdio.h>
#include <math.h>

void metodoSecanteFloat(float X0, float E);
float funcaoFloat(float X);

float EULER = 2.718281828459045235360287;


int main(){
	float X0;
	float E;
	
	printf("\nEntre com o Xo: ");
	scanf("%f", &X0);
	printf("\nEntre com a precisao desejada: ");
	scanf("%f", &E);
	
	metodoSecanteFloat(X0, E);
	
}

void metodoSecanteFloat( float X0, float E ){
	float X, Xk, Xk1, Xk2;
	int i = 0;
	Xk = X0;
	Xk1 = X0 + 1;
	
	while(!(fabs(Xk1 - Xk) < E) && i < 20){
		
		Xk2 = ((Xk * funcaoFloat(Xk1)) - (Xk1 * funcaoFloat(Xk))) / (funcaoFloat(Xk1) - funcaoFloat(Xk));
		Xk = Xk1;
		Xk1 = Xk2;
		i++;
		
	}
	
	if( i == 20 ){
		printf("Seu Xo nao foi proximo o suficiente da raiz da funcao.\n");	
	}else{
		X = Xk1;
		printf("A aproximacao da raiz eh: %f\n", X);
	}
}

float funcaoFloat( float X ){
	float Y;
	
	Y = (X * pow(EULER, 0.5 * X)) + (1.2 * X) - 5;
	
	return (Y);

}