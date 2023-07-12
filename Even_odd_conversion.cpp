#include<stdio.h>


int main(){
	
	int num;
	
	printf("Enter the limit\n");
	scanf("%d",&num);
	
	for(int i = 0;i<=num;i++){
		
		if(i % 2 == 0)
		{
			i++;
			printf("Odd of %2d is = %2d\n",i-1,i);
		}
	}
	
}
