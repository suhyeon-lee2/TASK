#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float a;
	printf("파운드로 계산할 무게를 입력하시오:");
	scanf("%f", &a);
	printf("입력하신 무게는 %.3f파운드 입니다.", a * 0.453592);
}