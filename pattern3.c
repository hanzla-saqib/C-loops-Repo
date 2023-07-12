#include<stdio.h>

int main(){
	
	int rows,j,i,k;
	
	printf("Enter the number of rows");
	scanf("%d",&rows);//4
	
	for(i = 1;i<=rows;i++) {//2<4
		
		k = 1;
		
		for(j = 1 ; j<=rows + i -1;j++) {//1<=5
			
			if(j <= rows - i || j>=rows + i) {//
				
				printf("+ ");//+++1
				            //++1
			}
			
			else if(j / 2 + 1 ) 
                {
				printf("%d ",k++);//1
			}else {
                k--;
                printf("%d",k);
            }
		}printf("\n");
	}
}
d