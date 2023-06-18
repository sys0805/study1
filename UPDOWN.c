# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void gamemenu()
{
	printf("	    ┌──────────────────────────────────────────────┐\n");
	printf("	    │                                              │\n");
	printf("	    │                Up & Down GAME                │\n");
	printf("	    │                                              │\n");
	printf("	    └──────────────────────────────────────────────┘\n");
}

int main(void)
{
	int num;
	int player;
	int count = 0;

	gamemenu();
	Sleep(3000);
	system("cls");

	srand(time(NULL));

	num = rand() % 100 + 1;

	while (1)
	{
		count++;

		printf("숫자를 입력하세요.\n");

		scanf("%d", &player);
		system("cls");
		
		
		printf(".");
		Sleep(300);
		printf(".");
		Sleep(300);
		printf(".\n");
		Sleep(500);
		system("cls");

		if (player > num)
		{
			printf("______  _____  _    _  _   _ \n");
			printf("|  _  ||  _  || |  | || | | |\n");
			printf("| | | || | | || |  | ||  | |\n");
			printf("| | | || | | || |/|| || . ` |\n");
			printf("| |/ / | '_/ /|  /|  /| ||  |\n");
			printf("|___/   '___/  --  -- |_| |_/\n");

			Sleep(500);
		}

		else
		{
			if (player < num)
			{
				printf(" _   _ ______ \n");
				printf("| | | || ___ |\n");
				printf("| | | || |_/ /\n");
				printf("| | | ||  __/ \n");
				printf("| |_| || |   \n");
				printf("|___/ |_|   \n\n\n");
				Sleep(500);
			}

			else
			{
				printf("%d번 만에 맞혔습니다.\n", count);
				break;
			}
		}
	}

	getchar();
	return 0;
}