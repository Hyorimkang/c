#include <stdio.h>
int main(void) {
	register int i;//�������� ���� i����
	int sum = 0;
	for (i = 1; i <= 10; i++)
		sum = sum + i; //�������� ���� i���
	printf("1���� 10������ ��=%d\n", sum); //���
	return 0;
}