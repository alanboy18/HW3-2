#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(int n);
int n_m, temp = 1, a = 0, b=1, i;

int main(void)
{
	printf("���{���|�p��O�B�����żƪ���N��\n");
	printf("�п�JN�G");
	scanf("%d", &n_m);
	printf("�O�B�����żƪ���%d���ƭȬ�%d\n", n_m, fibonacci(n_m));
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