#include<stdio.h>

int main(){

    int rows,i,col,j,k;

    printf("Enter the number of rows\n");
    scanf("%d",&rows);//5

    for(i = 1;i<=rows;i++) {

        k = 1;
        for(j=1;j<=rows;j++) {

            if(j<rows-i-1) {//3<2

                printf("+");//++1++
                            //+
            }
            else {
              printf("%d",k);//1
              k += 2;   //3

            }
        }printf("\n");
    }
}