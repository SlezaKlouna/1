// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <cstdlib> 
int main()
{
	int answer = 0;
	scanf_s("%d", &answer);//принимаешь число
		char art [10];
	if (answer == 1)
	{
		art [10] = 'A';
	}
	else if (answer == 2)
	{
		art[10] = 'B';
	}
	else if (answer == 3)
	{
		art[10] = 'C';
	}
	printf("\s", &art);	
	getchar();
	system("pause");
	return 0;
}

