#include<stdio.h>
main(){
	int i;
	int b;
	int c;
	
	printf("\n Enter The Number Between 1-20 to break Counting");
	scanf("%d",&b);
	
	for(i=1;i<=20;i++){
		printf("\n %d",i);
		if(i==b){
			break;
		}
	}
	
	printf("\n Enter The Number Between 1-20 to Skip Printing");
	scanf("%d",&c);
	
	for(i=1;i<=20;i++){
		if(i==c){
		continue;
		}
		printf("\n %d",i);
		
	}
}
