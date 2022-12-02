#include <stdio.h>

int main() {
	/*
	int a, b;

	scanf_s("%d%d", &a, &b); // & : ∆˜¿Œ≈Õ

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	*/

	float f, g;

	scanf_s("%f%f", &f, &g);

	float hap = f + g;
	float cha = f - g;
	float gop = f * g;
	float mok = f / g;

	printf("%f + %f = %f\n", f, g, hap);
	printf("%f - %f = %f\n", f, g, cha);
	printf("%f * %f = %f\n", f, g, gop);
	printf("%f / %f = %f\n", f, g, mok);
}