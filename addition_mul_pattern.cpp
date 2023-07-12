#include<stdio.h>

int main(){
	
	int num,count = 1,limit;
	
	printf("Enter an integer\n");
	scanf("%d",&num);//num=1
	printf("Enter the limit\n");
	scanf("%d",&limit);//limit=7
	
	while(count<=limit)//1<7 true
	{
		printf("%d  ",num);//1 ,1+3=4,,4*2=8,,8+3=11,,11*2=22,,22+3=25,
		
		if(count % 2 == 0)//1%2!=0,2%2=0,,3%2!=0,,4%2=0,,5%2!=0,,6%2=0
		{
			num *= 2;//4*2=8,11*2=22
		}
		else
		{
			num +=3;//1+3=4,//8+3=11,//22+3=25
		}
		count++;//1->2,2->3,3->4,4->5,5->6
		
	}
}
