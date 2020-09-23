#include<stdio.h>
main()
{
	//1. Display the menu
	printf("Menu \n 1. Sandwich \n 2. Pizza \n 3. Pasta \n 4. Burger \n5. French Fries \n");
	//2. Read their choice
	printf("Pick an item : ");
	int choice=0;
	scanf("%d",&choice);
	//3.Display based on their choice

switch(choice)
{
	case 1: 
	    printf("Food Item - Sandwich \n Price- Rs 149");
	    break;
	case 2:
		printf("Food Item - Pizza \n Price- Rs 239");
		break;
	case 3:
		printf("Food Item - Pasta \n Price- Rs 179");
		break;
	case 4:
		printf("Food Item - Burger \n Price- Rs 129");
		break;
	case 5:
	    printf("Food Item - French Fries \n Price- Rs 99");
		break;	
}
}
