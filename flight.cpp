#include<stdio.h>

int main(){
	
	int arr1[5] = {0},arr2[5] = {0},seats,type,x = 1,count1 = 0,count2 = 0,seat1;
    
    while(x>0) {
    	
    	if(count1<5 || count2<5) {//5!<=5 ||5!<=5
    		
    		printf("Which type of seats do you want\nType 1 for classic and 2 for business\n");
    		scanf("%d",&type);//1,2,1,2
    		printf("how many seats do you want\n");
    		scanf("%d",&seats);//2,3,3,2
    		
    		
    		switch(type) {//1,2,1,2
    			
    			case 1:
    				if(seats<=5){
					
    		       if(count1<5){
				   
				   seat1 = seats + count1;//3+2=5		
    				while(count1<seat1) {//5!<5
    					
    					arr1[count1]++;//{1,1,1,1,1}
      					printf("%d ",arr1[count1]);
      					count1++;//1,2,3,4,5
    		}
			}else{printf("WE have limited seats");
			}
			printf("\n");
			}else{
    			printf("All first class seats are booked");
			}
						break;
    			case 2:
    				if(seats<5){
					
    				if(count2<5){//3<5
					
    		       seat1 = seats + count2;//2+3=5		
    				while(count2<seat1) {//4<5
    					
    					arr2[count2]++;//{1,1,1,1,1}    					
    					printf("%d ",arr2[count2]);
    					count2++;//3,4,5
    				}
					}
					printf("\n");
    			}else{
    				printf("All seats are booked");
				}
						break;
						default:
							printf("You entered inappropriate type\n");
					
			
		}
		printf("%d",count1);
	}
	else{
		printf("All seats are booked\n");
		x--;
	}
}
}
