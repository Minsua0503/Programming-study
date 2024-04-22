//문자입력받고 한글자씩 출력하기
#include <stdio.h>

int main()
{
	char string[20]; 
	int i;
	scanf("%s", string);
	
	for(i=0; string[i] != 0; i++)
	{
		printf("'%c'\n", string[i]);
	}
	return 0;
}
