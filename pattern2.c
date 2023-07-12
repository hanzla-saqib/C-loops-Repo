#include<stdio.h>

int main(){
	
	int rows,j,i,k;
	
	printf("Enter the number of rows");
	scanf("%d",&rows);//4
	
	for(i = 1;i<=rows;i++) {//2<4
		
		k = i * 2 -1;
		
		for(j = 1 ; j<=rows * 2 -1;j++) {//1<=5
			
			if(j <= rows - i || j>=rows + i) {//
				
				printf("+ ");//+++1
				            //++321
			}
			
			else{
				printf("%d ",k);//3
				k--;//2
			}
		}printf("\n");
	}
}
