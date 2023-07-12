#include<stdio.h>

int main(){
	
	int cal = 1,month,i;
	
	printf("Enter the number of month\n");
	scanf("%d",&month);
	
	printf("MO TU WE TH FR SA SU\n");
	for(i = 1;i<month;i++)
		{
			printf("   ");
		} i -= 1;
		
	while(cal<=31)
	{
		int count = i + cal + 1;
		if(cal<=31)
		printf("%2d ",cal);

				if(count == 8)
		{
			printf("\n",cal);
                      
					  		}

		cal++;
	}
	
	
}
