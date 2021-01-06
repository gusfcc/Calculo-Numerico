#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double *vetX;
	double vet[8] = {0.006, 0.011, 0.017, 0.025, 0.039, 0.060, 0.081, 0.105};
	vetX = (double*)malloc(8 * sizeof(double));
	//vet = {{0.006, 0.011, 0.017, 0.025, 0.039, 0.060, 0.081, 0.105}};
	vetX = vet;
	
	for(int i = 0; i < 8; i++)
	{
		printf("%lf\t", vet[i]);
	}
	
	
	
	return 0;
}