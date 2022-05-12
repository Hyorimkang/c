#include <stdio.h>
//int sum = 0; //전역변수지정1
int main() {
	int i;
	for (i = 1; i <= 10; i++)
		printf("1+2+3+...=%d\n", sum += i); //2
	printf("1+2+3+...=%d\n", sum);
	return 0;
}