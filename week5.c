#include <stdio.h>

int menu()
{
	printf("######################################\n");
	printf("##                                  ##\n");
	printf("##                                  ##\n");
	printf("##              week 5              ##\n");
	printf("##                                  ##\n");
	printf("##                                  ##\n");
	printf("##                                  ##\n");
	printf("##                2                 ##\n");
	printf("##                                  ##\n");
	printf("##                                  ##\n");
	printf("##                                  ##\n");
	printf("######################################\n");
}
int main()
{
	menu();
	int first;
	scanf("%d", &first);
	if(first==2)
	{
		int second = 0;
		while(first)
		{
			printf("Press the space bar to dodge\n");
			printf("Return to menu?(1.yes 2.no)\n");
			scanf("%d", &second);
			if(second==1)
			{
				menu();
				scanf("%d", &first);
					
			}
			else if(second==2)
			{
			}
			else if(second==3)
			{
				first=0;
			}
			else
			{
				printf("\n\nPlease enter 1~3\n\n");
			}
		}
	}
	
	return 0;
}
