#include<stdio.h>
main(){
	int a;
	int b;
	 printf("Enter the A & B number");
	 scanf("%d %d",&a,&b);
	 
	printf(" \nThe Sum Of A & B = %d",a+b);
	if(a>b && a>0 && b>0){
		printf("\nThe %d is gretter Than %d ",a,b);
	}
	else{
	printf("\nThe %d is gretter Than %d ",b,a);
	}
}
