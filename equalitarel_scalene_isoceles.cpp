#include<stdio.h>

int main(){
	
	float side1,side2,side3;
	
	printf("Enter three sides of a triangle\n");
	scanf("%f%f%f",&side1,&side2,&side3);
	
	if(side1 == side2 && side2 == side3) {
		
		printf("This is an equaletarel triangle");
	}
	else	if(side1 != side2 && side2 != side3) {
		
		printf("This is an scalene triangle");
	}
	else	if(side1 == side2 || side2 == side3 || side3 == side1) {
		
		printf("This is an Isosceles triangle");
	}
}
