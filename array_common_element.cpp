#include<stdio.h>

int main(){
	
	int num,num1,num2;
	
	printf("Enter the limit\n");
	scanf("%d",&num2);
	
	for(num = 1;num<=num2;num++){
		
		for(num1 = 1;num1<=10;num1++){
			
			printf("%d * %d = %d\n",num,num1,num * num1);
		}
	}
}
