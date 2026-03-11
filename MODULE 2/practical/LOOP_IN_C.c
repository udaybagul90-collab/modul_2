#include<stdio.h>
main(){
	int i;
	
	printf("\n Using FOR LOOP");
	
	for(i=1;i<=10;i++){
		printf("\n %d",i);
	}
	
	printf("\n\n\n Using WHILE LOOP");
	i=1;
	while(i<=10){
		printf("\n %d",i);
		i++;
	}
	
	printf("\n\n\n Using DO WHILE LOOP");
	i=1;
	do{
		printf("\n %d",i);
		i++;
	}while(i<=10);
}
