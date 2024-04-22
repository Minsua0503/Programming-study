#include <stdio.h>

int main()
{
	int num[1000];
	int k, i, j;
	scanf("%d", &k);
	for(i=0; i<k; i++)
	{
		scanf("%d", &num[i]);
	}
	for(j=k-1; j>=0; j--)
	{
		printf("%d ", num[j]);
	}
	return 0;
}
