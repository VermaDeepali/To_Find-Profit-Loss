#include<stdio.h>
#include<conio.h>
int main()
{
	float CP,SP ,P , L;
	printf("enter cost price and selling price:");
	scanf("%f %f",&CP ,&SP);
	P = ((SP-CP)*100)/CP;
	L = ((CP-SP)*100)/CP;
	if(SP>CP)
	{
		printf("Profit of %f",P);
	}
	else
	{
		printf("loss of %f",L);
	}
	return 0;
}
