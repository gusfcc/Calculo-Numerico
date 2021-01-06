#include <stdio.h>
#include <float.h>

int main(){
	printf("Valor minimo de float: %.10e\n", FLT_MIN);
	printf("Valor maximo de float: %.10e\n", FLT_MAX);
	printf("Valor minimo do expoente de um numero float na base 10: %.10e\n", FLT_MIN_10_EXP);
	printf("Valor maximo do expoente de um numero float na base 10: %.10e\n", FLT_MAX_10_EXP);
	printf("Quantidade de digitos significativos de um numero float: %.10e\n", FLT_MANT_DIG);
	
	printf("\n");
	
	printf("Valor minimo de double: %.10e\n", DBL_MIN);
	printf("Valor maximo de double: %.10e\n", DBL_MAX);
	printf("Valor minimo do expoente de um numero double na base 10: %.10e\n", DBL_MIN_10_EXP);
	printf("Valor maximo do expoente de um numero double na base 10: %.10e\n", DBL_MAX_10_EXP);
	printf("Quantidade de digitos significativos de um numero double: %.10e\n", DBL_MANT_DIG);
	
}