#include<stdio.h>
int main()
{
	int day;
	printf("\nEnter day 1 to 7 : \n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("The day %d is Sunday.",day);
			break;
		case 2:
			printf("The day %d is Monday.",day);
			break;
		case 3:
			printf("The day %d is Tuesday.",day);
			break;
		case 4:
			printf("The day %d is Wednesday.",day);
			break;
		case 5:
			printf("The day %d is Thrusday.",day);
			break;
		case 6:
			printf("The day %d is Friday.",day);
			break;
		case 7:
			printf("The day %d is Saturday.",day);
			break;
		default:
			printf("Are Gadha days houchi 7 ta\nso 1 ru 7 bhitare enter kara.");
	}
	return 0;
}
