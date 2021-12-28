#include <stdio.h>	

int main(void)
{
	//int a = 0;
	//scanf_s("%d", &a);


	//int i = 0;
	//while (i < a)
	//{
	//	putchar('*');
	//	i++;
	//}
	//putchar('\n');

	////입력한 값이 엔터가 아닐 경우 계속해서 값을 보내라.



	//[5행 5열의 사각형 출력]
	int i = 0;
	int j = 0;
	while (i < 5)
	{
		while (j < 5)
		{
			putchar('*');
			putchar('\t');
			++j;
		}
		j = 0;
		putchar('\n');

		++i;
	}
	return 0;
}