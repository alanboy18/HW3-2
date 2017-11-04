#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(int n);
int n_m, temp = 1, a = 0, b=1, i;

int main(void)
{
	printf("本程式會計算費伯那契級數的第N項\n");
	printf("請輸入N：");
	scanf("%d", &n_m);
	printf("費伯那契級數的第%d項數值為%d\n", n_m, fibonacci(n_m));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(int n)
{
	if (i == 1)temp = 0;
	else if (i == 2)temp = 1;
	else if (i == 3)temp = 1;
	for (i = 2; i <= n; i++)
	{		
		temp = b;
		b = a + b;
		a = temp;
	}	
	return temp;
}