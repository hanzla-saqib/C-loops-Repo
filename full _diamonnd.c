#include<stdio.h>

int main(){

    int i,j,k,l,rows,space,space1;

    printf("Enter the number of lines");

    scanf("%d",&rows);//4

    for(i = 1;i <= rows / 2 + 1;i++) {

        for(space = 1;space<rows - i;space++) {

            printf(" ");
        }

        for(j = 1;j <= i;j++) {

            printf("* ");
        }printf("\n");
    }
      // printf(" ");
    for(k =1; k<=rows/2; k++) {//3<=3

        for(space1 = 1;space1<=k;space1++ ) {//1<=3

            printf(" ");//---
        }

        for(l = rows /2;l>=k;l--) {//2>=3
            printf(" *");// ***
                        //--**
                        //---*
        }printf("\n");
    }
}