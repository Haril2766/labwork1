#include<stdio.h>

void main(){
	int a,b,c;
	
	printf("Enter a number : ");
	scanf("%d",&a);
	
	printf("Enter a number : ");
	scanf("%d",&b);
	
	printf("Enter a number : ");
	scanf("%d",&c);
	
	a>b?(a>c?printf("a"):printf("c")):b>c?printf("b"):printf("c"); 
}
