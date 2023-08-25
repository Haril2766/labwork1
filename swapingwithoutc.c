#include<stdio.h>
 void main(){
 	int n1,n2;
 	printf("Enter a no. : ");
 	scanf("%d",&n1);
 	printf("Enter a no. :");
 	scanf("%d",&n2);
 	n1=n1+n2;
 	n2=n1-n2;
 	n1=n1-n2;
 	printf("After swaping n1=%d and n2=%d",n1,n2);
 	
 }
