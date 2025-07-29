#include<stdio.h>
main()

{
	int quantity , choice , price;
	int Pizza =140,Burger=100,Dosa=80,Idli=60,Mocktails=100;
	int bill;
	char op;
do{
	printf("\t\t\t\t\tWelcome to Food Hub \n");
	printf("\t\t\t\t\t========MENU======= \n");
	printf("1.Pizza    ---->   Price = 140rs/4pcs \n");
	printf("2.Burger   ---->   Price = 100rs/pcs \n");
	printf("3.Dosa     ---->   Price = 80rs/pcs \n");
	printf("4.Idli     ---->   Price = 60rs/pcs \n");
	printf("5.Mocktails---->   Price = 100rs/pcs \n");
	printf("Please enter your choice :");
	scanf("%d",&choice);
		
		switch(choice)		
		{
			case 1: printf(" You have selected Pizza. \n");
					printf("enter your quantity :");
					scanf("%d",&quantity);
					printf("amount for Pizza :%drs\n",Pizza*quantity);
					bill = bill+(Pizza*quantity);
					break;
			
			case 2: printf(" You have selected Burger. \n");
					printf("enter your quantity :");
					scanf("%d",&quantity);
					printf("amount for Burger :%drs\n",Burger*quantity);
					bill = bill+(Burger*quantity);
			break;
			
			case 3: printf(" You have selected Dosa. \n");
					printf("enter your quantity :");
					scanf("%d",&quantity);
					printf("amount for Dosa :%drs\n",Dosa*quantity);
					bill = bill+(Dosa*quantity);
			break;
			
			case 4: printf(" You have selected Idli. \n");
					printf("enter your quantity :");
					scanf("%d",&quantity);
					printf("amount for Idli  :%drs\n",Idli*quantity);
					bill = bill+(Idli*quantity);
			break;
			
			case 5: printf(" You have selected Mocktails. \n");
					printf("enter your quantity :");
					scanf("%d",&quantity);
					printf("amount For Mocktails :%drs\n",Mocktails*quantity);
					bill = bill+(Mocktails*quantity);
		break;
	default :
		printf("\n\nInvalid choice");
			
	}		
			
	printf("Do you want to add more items :(Press y for Yes & N for no)");
	scanf(" %c",&op);
			
			
		
		
	}while(op == 'y' || op == 'Y');
	
	printf("\n Your total bill is : %d",bill);
	printf("\n Thank you for Ordering at Food Hub");
	
}
