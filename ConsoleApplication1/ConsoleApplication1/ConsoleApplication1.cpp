// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 

#include <stdio.h> 
#include <math.h> 

int main(void)
{

	float R, P, l, S;

	printf("\n VVedite radius i chislo Pi ");
	scanf_s("%f %f", &R, &P);
	l = 2 * P*R;
	printf("Dlina okrujnosti %f, /n", l);
	S = pow(R, 2)*P;
	printf("Ploshad okrujnosti %f,/n", S);
	return 0;
}
