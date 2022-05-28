#include <stdio.h>
int main() {
	char ch[20];
	printf("당신의 이름은 영문으로 쓰시오:");
	gets(ch);
	printf("ch=%s\n", ch);
	return 0;
}