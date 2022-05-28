#include <stdio.h>
int main(void) {
	char ch;
	printf("1개의 영문자를 입력하시오:");
	ch = getchar();
	printf("Typed: %c\n", ch);
	return 0;
}