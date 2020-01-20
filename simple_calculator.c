#include<stdio.h>
#include<conio.h>
	float add(float,float);
	float sub(float,float);
	float mult(float,float);
	float div(float,float);
	int main()
	{
		char operator;
		float num1, num2, result=0.0;
		printf("SIMPLE CALCULATOR\n");
		printf("--------------------------------------------------------\n");
		printf("Enter the operator(+,-,/,*)\n");
		scanf("%c",&operator);
		printf("Enter the first number:\n");
		scanf("%f",&num1);
		printf("Enter the second number:\n");
		scanf("%f",&num2);
		switch(operator)
		{
			case'+':
				result=add(num1,num2);
				break;
		
			case'-':
				result=sub(num1,num2);
				break;
			case'*':
				result=mult(num1,num2);
				break;
			case'/':
				result=div(num1,num2);
				break;
			default:
				printf("Invalid Selection");
		
			}
			printf("%f %c %f =%.2f", num1,operator,num2,result);
			getch();
	}
	float add(float num1, float num2)
	{
		return num1+num2;
	}
	
	float sub(float num1, float num2)
	{
		return num1-num2;
	}
	float mult(float num1, float num2)
	{
		return num1*num2;
	}
	float div(float num1, float num2)
	{
		return num1/num2;
	}
	
	
	
	
	
