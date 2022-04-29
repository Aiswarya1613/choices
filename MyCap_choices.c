#include<stdio.h>
main()
{
	int ch;
	printf("Enter any number from 1-5:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Food Item:Noodles\nPrice:200");
			break;
		case 2:
			printf("Food Item:Biriyani\nPrice:250");
			break;
		case 3:
			printf("Food Item:American Chopsey\nPrice:300");
			break;
		case 4:
			printf("Food Item:Steak\nPrice:350");
			break;
		case 5:
			printf("Food Item:Meals\nPrice:100");
			break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}
