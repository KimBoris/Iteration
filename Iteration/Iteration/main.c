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

	////�Է��� ���� ���Ͱ� �ƴ� ��� ����ؼ� ���� ������.



	//[5�� 5���� �簢�� ���]
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