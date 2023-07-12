#include<stdio.h>

int main(){

    int i,j,rows,col = 1,half;

    printf("Eter rows\n");
    scanf("%d",&rows);//5
        half = rows / 2 + 1;//3
    for(i = 1;i<=rows;i++) {//2<=5

        for(j = 1;j <= col;j++) {//1<=2
             printf("%d",col);//*

        }printf("\n");
        if(i < half) {//2<3
            col++;//3
        }
        else {
            col--;
        }
    }
}