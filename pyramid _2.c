#include<stdio.h>
int main(){


    int i,j,limit;

    printf("Enter a limit\n");
    scanf("%d",&limit);//5

     for(i = 1;i<= limit;i++) {


        for(j = 1;j<=limit;j++) {//1<2*i-1=1<=1

            if(i * j == 5 * i) {
                printf("1");
            }

            if(i * j == 4 * i || i*j == 6 * i) {
                printf("2");
            }
              if(i * j == 3 * i || i*j == 7 * i) {
                printf("3");
            }
              if(i * j == 2 * i || i*j == 8 * i) {
                printf("4");
            }
              if(i * j == 1 * i || i*j == 5 * i) {
                printf("5");
            }
            else {
                printf("+");
            }


        }printf("\n");
     }
}