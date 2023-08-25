#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter First Number : ");
	scanf("%d",&a);
	 
	printf("Enter Second Number : ");
	scanf("%d",&b);
	
	printf("Enter  Third Nummber : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("a is large number");
	}
	else if(b>c)
	{
		printf("b is large number");
	}
	else 
	{
		printf("c is large Number");
	}
}
