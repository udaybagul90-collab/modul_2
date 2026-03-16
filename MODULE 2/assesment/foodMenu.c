#include<stdio.h>
int main(){
int choice,qty;
char more;
int total=0;
do{
	printf(" ---------------------------------");
	printf("\n | 1. pizza      prize = 180/pcs |");
	printf("\n | 2. burger     prize = 100/pcs |");
	printf("\n | 3. dosa       prize = 100/pcs |");
	printf("\n | 4. idli       prize = 50/pcs  |");
	printf(" \n ---------------------------------");
	
	printf("\nEnter The Item Number");
	scanf("%d",&choice);
	
	printf("\nEnter The Qty");
	scanf("%d",&qty);
	
	switch(choice){
		case 1:
			total += 180*qty;
			break;
		case 2:
			total += 100*qty;
			break;
		case 3:
			total += 100*qty;
			break;
		case 4:
			total += 50 * qty;
			break;
		default:
			printf("\nInvalid Choice");
		}
		printf("\n your Total Ammount Is %d",total);
		
		printf("\n do you want place more order y/n : ");
		scanf(" %c",&more);
	
} while (more == 'y' || more == 'Y');

printf("\n ----- FINAL BILL -----");
printf("\nTOTAL AMMOUNT = %d",total);
printf("\nThank you for Your Order");
}
