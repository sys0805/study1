#include <stdio.h>
int main()
{
	printf("주인공의 공격력을 입력하세요.");
	int atk, b;
	int a=30;
	scanf("%d", &atk);
	b = 30 - atk;
	if(atk<30)
	{
	printf("주인공은 공격력이 %d입니다.\n",atk);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n\n",atk);
	printf("적의 잔여 HP : 30 - %d = %d\n\n\n", atk, b);
	printf("적이 주인공을 공격하여 주인공이 터졌습니다.\n\nGame Over");
	}
	else
	{
	printf("주인공은 공격력이 %d입니다.\n",atk);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n\n",atk);
	printf("적의 잔여 HP : 0\n\n\n");
	printf("적을 물리쳤습니다!\n\nHappy End");
	}
	
	
	
	return 0;
}
