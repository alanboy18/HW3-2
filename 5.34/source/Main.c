#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);
int base_m, exponent_m;

int main(void)
{
	printf("本程式將會計算指數\n");
	printf("請輸入基數：");
	scanf("%d", &base_m);
	printf("請輸入次方：");
	scanf("%d", &exponent_m);

	printf("%d的%d次方是%d", base_m, exponent_m, integerPower(base_m,exponent_m));
	
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