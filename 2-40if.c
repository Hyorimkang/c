#include <stdio.h>
int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 8; j <= 9; j++) {
			printf("%d*%d=%2d\t", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}