#include<stdio.h>

int main(){
	
	int num,num1 = 1,rem,sum = 0;
	
	printf("Enter a binary number\n");
	scanf("%d",&num);//10101
	
	while(num != 0)
	{
		rem = num % 10;//10101->1,1010->0,101->1
		sum += num1 * rem;//1*1+0=1,2*0 +1=1,1*4+1=5;
		num1 = num1*2;//1*2=2,2*2=4,4*2=8
		num /= 10;//10101->1010->101->10
	}
	printf("%d is the binary form",sum);
}
