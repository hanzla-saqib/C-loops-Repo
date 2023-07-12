#include<stdio.h>

int main(){
	
	int num,num1,fac = 1;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	num1 = num;
	
	while(num != 0)
	{
		fac *=num;
		num--;
	}
	printf("%d is the factorial of %d",fac,num1);
}
