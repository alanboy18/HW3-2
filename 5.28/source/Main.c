#include <stdio.h>
#include <stdlib.h>

char num;
char char_trans(char a);

int main(void)
{
	printf("���{���|�N�j�g�ܤp�g�A�p�g�ܤj�g�G\n");
	printf("�п�J�r���G");
	scanf("%c", &num);
	printf("%c\n", char_trans(num));
	system("pause");
	return 0;
}

char char_trans(char a)
{
	if (a / 16 == 4 || a / 16 == 5)
	{
		a = a | 0x20;//0B0
	}
	else if (a / 16 == 6 || a / 16 == 7)
	{
		a = a & 0x5f;
	}
	return a;
}