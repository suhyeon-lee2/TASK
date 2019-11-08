#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	
	printf("두 정수를 입력하시오:");
	scanf("%d %d", &a, &b);

	if (a >b){
		printf("몫은 %d이며 나머지는 %d 입니다.", a / b, a % b);
	}
	else if (a < b) {
		printf("몫은 %d이며 나머지는 %d입니다.", b / a, b % a);
	}
	return 0;


}