#include<stdio.h>

int main(){

    int num,sum = 0;
    float ave,times = 0;

    do{
        printf("Enter a number\n");
        scanf("%d",&num);

        if(num != 0){
            sum += num;
        times++;
        ave = sum / times;
        }
    }while(num != 0);

    printf("The sum of %f numbers=%d\nThe average of %f numbers=%f",times,sum,ave,times);
}