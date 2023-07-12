#include<stdio.h>
 int i,j,k = 0;
int Pyramid(int rowss) {
    for(i = 1 ; i <= rowss ; i++) {
      char   ch = 'A';
          for(j = 1 ; j <= rowss * 2 -1 ; j++) {

            if(j <= i || j >= rowss * 2 - 1 - k) {
              
              if(j < rowss){
                printf("%c",ch);//A---
                ch++;//B
              }
              else {
                ch--;//A
                printf("%c",ch--);//@
                ch++;//D
              }
            }
            else {

                printf(" ");
            }
          }
          printf("\n");
          k++;
    }
}
int main() {
    
    int rows;

    printf("Enter number of rows\n");
    scanf("%d",&rows);

      Pyramid(rows);   
}