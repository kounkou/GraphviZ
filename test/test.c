#include <stdio.h>

void fA();
void fB();
void fC();
void fD();

void fA()
{
	return;
}

void fB()
{
	return;
}

void fC()
{
	int i=0;
	while(i<1000)
	{
		fD();
		i++;
	}
}

void fD()
{
	return;
}

int main()
{
	printf("Hello World!\n");
	fA();
	fB();
	fC();
	return 0;
}
