#include<stdio.h>
main(){
	int num;
	int month;
	
	printf("\n Enter The number");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n %d is EVEN",num);
		
	}
	else{
		printf("\n %d is ODD",num);
	}
	
	printf("\n\n\n Enter The Month (1-12)");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("January");
			break;
		case 2:
			printf("Fabruary");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("Jully");
			break;
		case 8:
			printf("Augest");
		case 9:
			printf("September");
			break;
		case 10:
			printf("Octomber");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
	}
	
	
	
}
