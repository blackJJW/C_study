#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 2. ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է� �޾Ƽ� ü���� ������ ���ϴ� ���α׷�
*/

int main() {
	float height, weight;

	scanf("%f%f", &height, &weight);

	float bmi = weight / (height * height) ;

	printf("BMI : %f", bmi);
}