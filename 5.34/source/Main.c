#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);
int base_m, exponent_m;

int main(void)
{
	printf("���{���N�|�p�����\n");
	printf("�п�J��ơG");
	scanf("%d", &base_m);
	printf("�п�J����G");
	scanf("%d", &exponent_m);

	printf("%d��%d����O%d", base_m, exponent_m, integerPower(base_m,exponent_m));
	
	system("pause");
	return 0;
}

int integerPower(int base, int exponent)
{
	if (exponent == 1)base=base;
	else
	{
		exponent--;
		base = base * integerPower(base, exponent);		
	}
	return  base;
}