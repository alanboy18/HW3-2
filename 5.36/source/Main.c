#include <stdio.h>
#include <stdlib.h>

int Floor;

void hanoi(int num, char start, char temp, char end)
{
	if (num > 0)
	{
		hanoi(num - 1, start, end, temp);
		printf("%d  %c -> %c  \n", num, start, end); /* 顯示移動狀況 */
		hanoi(num - 1, temp, start, end);
	}
}

int main(void)
{
	printf("請輸入有幾層漢諾塔：");
	scanf("%d", &Floor);
	hanoi(Floor, 'a', 'b', 'c');
	system("pause");
	return 0;
}