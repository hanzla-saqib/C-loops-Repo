#include<stdio.h>

int main(){

    int num,pow,i,res = 1;

    printf("Enter number and its power\n");
    scanf("%d%d",&num,&pow);//4,3

    for(i = 1;i <= pow;){

        res *= num;//1*4=4,4*4=16,16*4=64
        i++;//1->2->3
    }

    printf("%d",res);
}