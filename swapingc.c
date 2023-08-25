#include<stdio.h>

void main(){
	int n1,n2,c;
	printf("Enter n1 no. : ");
	scanf("%d",&n1);
	printf("Enter n2 no. : ");
	scanf("%d",&n2);
	c=n1;
	n1=n2;
	n2=c;
	printf("After swaping n1=%d  and n2=%d",n1,n2);
	
}
