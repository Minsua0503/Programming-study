// 주현이 또봇 사주기 
#include <stdio.h>

int main()
{
	int k, i;
	int num[10];
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &k);
	printf("%d", num[k-1]);
	return 0;
}
