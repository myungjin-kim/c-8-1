#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char a = '*';
	char* b = &a;

	printf("���� a�� �ּ�: %u, �ڵ�: %d, ����: %c\n", b, *b, *b);

}