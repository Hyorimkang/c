#include <stdio.h>
int main() {
	int color;
	printf("������ ������? \n");
	scanf_s("%d", &color);
	if (color <= 10)
		printf("�����-A�� \n");
	else if (color <= 20)
		printf("�Ķ���-B�� \n");
	else if (color <= 30)
		printf("������-C�� \n");
	else
		printf("�߸��Է��ϼ̽��ϴ�.");
	return 0;
}