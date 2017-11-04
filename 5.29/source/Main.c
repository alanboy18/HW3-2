#include <stdio.h>
#include <stdlib.h>

int a,b,c;
int num1_t, num2_t;
int lcm(int ,int);

int main(void)
{
	printf("請輸入兩數字本程式將會輸出最小公倍數：");
	scanf("%d %d", &num1_t, &num2_t);
	lcm(num1_t, num2_t);
	printf("最小公倍數：%d", num1_t*num2_t / (lcm(num1_t, num2_t)));
	
	system("pause");
	return 0;
}

int lcm(int a,int b)
{
	while (b != 0) 
	{
		c = a%b; a = b;  b = c;
	}

	return a;
}