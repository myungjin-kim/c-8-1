#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char a = '*';
	char* b = &a;

	printf("변수 a의 주소: %u, 코드: %d, : %c\n", b, *b, *b);

}
