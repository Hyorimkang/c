#include <stdio.h>
int main() {
	char ch[20];
	printf("����� �̸��� �������� ���ÿ�:");
	gets(ch);
	printf("ch=%s\n", ch);
	printf("ch=%c\n", ch[0]);
	return 0;
}