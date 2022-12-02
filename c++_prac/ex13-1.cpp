#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 2. 체중(kg, 실수)과 키(m, 실수)를 입력 받아서 체질량 지수를 구하는 프로그램
*/

int main() {
	float height, weight;

	scanf("%f%f", &height, &weight);

	float bmi = weight / (height * height) ;

	printf("BMI : %f", bmi);
}