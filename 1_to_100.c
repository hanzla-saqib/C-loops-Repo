#include<stdio.h>

int main(){

  int i,j,limit;
   
   printf("Enter a limit\n");
   scanf("%d",&limit);//6

       for(i = 1; i <= limit; i++) {
           
           int letter = 'A';
          for(j = 0; j<=limit -i; j++) {//0<=

            printf("%c",letter);//ABCDEFEDCBA
                                //ABCDE-EDCBA
                                //ABCD---DCBA
            letter++;//66->67->68->69
                     //
          } 
          letter -= 2;//69-2=67

          for(j = 1; j<=2 * i -3;j++) {

            printf(" ");//-
          }
          if(i >= 2){
            letter++;//67+1=68
          }
          for(j = 0;j<=limit - i; j++) {
          if(letter != '@'){         
            printf("%c",letter);//
            letter--;//l=68->67->66->65->65
          }
                    }printf("\n");
   }
}