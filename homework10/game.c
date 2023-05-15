#include <stdio.h>


int main()
{
	
	int q;
	
	printf("다항함수 f(x)에 대하여 곡선 y=f(x) 위의 점 (0,f(0))에서의 접선의 방정식이 y=3x-1이다. 함수 g(x)=(x+2)f(x)에대하여 g'(0)의 값은?\n(1) 5 (2) 6 (3) 7 (4) 8 (5) 9");
	scanf("%d", &q);
	
	if (q==1)
	{
		printf("정답.");
	}
	else if(q==2)
	{
		printf("틀림.");
	}	
	else if(q==3)
        { 	
		printf("틀림.");
        }
	else if(q==4)
        { 	
		printf("틀림.");
        }
	else if(q==5)
        { 	
		printf("틀림.");
        }
	else
	{
		printf("다시입력(1~5)");
	}

	return 0;
}

