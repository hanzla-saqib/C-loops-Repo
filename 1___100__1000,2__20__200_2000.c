#include<stdio.h>

int main(){

    int i,j,k = 1,sum = 10;

    for(i = 1;i<= 9;i++) {
     k = 1;
        for(j = 1;j <= 4;j++) {

            printf("%d\t",i * k);//1*1=1,1*10=10
            k *= sum;//1*10=10,10 * 10=100
        }printf("\n");
    }
}