#include<stdio.h>
int fact(int num){
    num;
	int ans;
	if(num==1){
	return 1;
	}
	else{
		ans = num*fact(num-1);
		return ans;
	}


		
}
main(){
	int num1;
	printf("\Enter The Number To find Factorial");
	scanf("%d",&num1);
	
	int result=fact(num1);
	
	printf("\n The Factorial Of %d is %d",num1,result);
	
}
