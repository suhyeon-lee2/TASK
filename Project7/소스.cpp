#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	
	printf("�� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &a, &b);

	if (a >b){
		printf("���� %d�̸� �������� %d �Դϴ�.", a / b, a % b);
	}
	else if (a < b) {
		printf("���� %d�̸� �������� %d�Դϴ�.", b / a, b % a);
	}
	return 0;


}