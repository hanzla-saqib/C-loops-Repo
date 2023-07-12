#include<stdio.h>

int main(){
	
	
    int ch[5],i,t;
    
    printf("Enter the element sof array\n");
    printf("--------------------------\n");
    
    for(i = 0;i<=4;i++){
    	
    	printf("Enter the element at %d : ",i);
    	scanf("%d",&ch[i]);
	}
	printf("\nEntered elements are :\n");
	for(i = 0;i<=4;i++){
    	
    	
    	printf("%d ",ch[i]);
	}
	printf("The reverse of array is :\n");
		for(i = 4;i>=0;i--){
    	
    	
    	printf("%d ",ch[i]);
	}
    
}
