#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>





void print_bytes(void* ptr, size_t size) {
	int rtr = 0;
	unsigned char* a = (unsigned char*)ptr;
	for (size_t i = 0; i < size; i++) {
		printf("%2x ", a[i]);
		rtr++;
	}
	printf("\n%d", rtr);
	printf("\n");
	
}


void main()
{
	setlocale(LC_ALL, "RUS");
	// 1 �������
	char* pi, i = 5;
	float* pf, f = 2.1f;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
	// 2 �������
	float PI = 3.14159, * p1, * p2;
	p1 = p2 = &PI;
	printf("�� ������ p1=%x �������� *p1=%g\n", p1, *p1);
	printf("�� ������ p2=%x �������� *p2=%g\n", p2, *p2);
	// 3 �������
	_Bool* pa, xo = 5;
	pa = &xo;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	pa++;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa);
	pa--;
	printf("�� ������ %p �������� *ptr=%g\n", pa, *pa); //��� ���� char � _Bool ����� ��������� ��������� �� 1 ����, ��� int �� 4, ��� double � long double �� 8, ��� short unsigned int �� 2 �����
	// 4 �������
	float array[10] = { 1.1, 2.2, 3.3, 4.4 , 5.5, 6.6, 7.7, 8.8, 9.9, 11.0 };
	float *ptr_a;
    ptr_a = &array[1];
	printf( "�������� ptr_a � * ptr_a: % p % f\n", ptr_a, *ptr_a);
	ptr_a++;
	printf(" �������� ptr_a � *ptr_a: %p   %f\n", ptr_a, *ptr_a);
	ptr_a+=4;
	printf(" �������� ptr_a � *ptr_a: %p   %f\n", ptr_a, *ptr_a);
	ptr_a -= 2;
	printf(" �������� ptr_a � *ptr_a: %p   %f\n", ptr_a, *ptr_a);
	for (ptr_a = &array[0]; ptr_a <= &array[9]; ptr_a += 2) {
		printf("%f\n",*ptr_a);
	}
	printf("\n");
	for (ptr_a = &array[9]; ptr_a >= &array[0]; ptr_a--) {
		printf("%f\n", *ptr_a);
	}
	// 5 �������
	printf("\n");
	int x=0x12345678;
	float h = 12345.0;
	double d = 12345.0;
	int* prt;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;
	prt = &x;
	a = (unsigned char*)prt;

	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%2x\n%2x\n%2x\n%2x\n", *a1, *a3, *a4, *a2);

	printf("int x = 0x12345678:\n");
	print_bytes(&x, sizeof(x));

	printf("float f = 12345.0f:\n");
	print_bytes(&f, sizeof(h));

	printf("double d = 12345.0:\n");
	print_bytes(&d, sizeof(d));


} 
