#include<stdio.h>

int main(){

    int rows,col,i,k;
    printf("Enter rows\n");
    scanf("%d",&rows);//4

    for(i = 1; i<=rows;i++) {
        k = 1;

        for(col = 1;col<=rows * 2 -1;col++) {//1<=7

            if(col <=rows - i || col >= rows + i) {

                printf("+");
            }
            else if(col <= rows / 2  + 1) {
                printf("%d",k);
                k += 2;
            }
            else{
                k -= 2;
                printf("%d",k);
            }
        }printf("\n");
    }
}