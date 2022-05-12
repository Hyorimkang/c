#include <stdio.h>
int main() {
	int decimal = 123, octal = 0123, hex = 0x3f;
	double float1 = 1234567.89;
	char char1 = 'A';
	char string[6] = "happy";
	printf("10진수: %d -> 8진수: %o -> 16진수: %x\n", decimal, decimal, decimal);
	printf("실수형 1234567.89의 지수 출력값 = %e\n",  float1);
	printf("문자 A의 ASCII 값= %d\n", char1);
	printf("배열 string의 출력값 = %s\n", string);
	return 0;
}