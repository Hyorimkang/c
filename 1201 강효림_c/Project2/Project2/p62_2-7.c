#include <stdio.h>
//int sum = 0; //������������1
int main() {
	int i;
	for (i = 1; i <= 10; i++)
		printf("1+2+3+...=%d\n", sum += i); //2
	printf("1+2+3+...=%d\n", sum);
	return 0;
}