//�����Է¹ް� �ѱ��ھ� ����ϱ�
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
