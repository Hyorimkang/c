#include <stdio.h>
int main() {
	int color;
	printf("������ ������? (1:����� 2:�Ķ��� 3:������)\n");
	scanf_s("%d", &color);
	switch (color) {
	 case 1: printf("�����: A��\n"); break;
	 case 2: printf("�Ķ��� : B��\n"); break;
	 case 3: printf("������ : C��\n"); break;
	 default:printf("�ٽ� �Է��ϼ���.\n");

	}
	return 0;
}