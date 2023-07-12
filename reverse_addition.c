#include<stdio.h>

int main(){

    int num,mod,num1,sum = 0,sum1 = 0;

    printf("Enter a number\n");
    scanf("%d",&num);//12345
     num1 = num;
    while(num != 0) {
        mod = num % 10;//12345->5,1234->4,123->3,123->12,1->1
        sum = sum * 10 + (mod+1);//0*10 +(5+1)=6,6*10+(4+1)=65,65*10+(3+1)=650+4=654,654*10+(2+1)=6540+3=6543,6543*10+(1+1)=65065430+2=65432
        num /= 10; //12345->1234,1234->123,123->12,12->1
    }printf("%d\n",sum);
    while(sum != 0) {
       mod = sum % 10;//65432->2
       sum1 = sum1 * 10 + mod;
       sum /= 10; 
    }

    printf("%d\n", sum1);
}