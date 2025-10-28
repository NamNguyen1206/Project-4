#include<stdio.h>

//Tim so lon nhat trong 3 so
void main() {
	int a;
	int b;
	int c;
	int Max;
	char kytu;

	printf("Moi nhap A : ");
	scanf_s("%d", &a);
	printf("Moi nhap B : ");
	scanf_s("%d", &b);
	printf("Moi nhap C : ");
	scanf_s("%d", &c);

	Max = a;
	kytu = 'A';

	if (Max < b)
	{
		Max = b;
		kytu = 'B';
	}
	if (Max < c)
	{
		Max = c;
		kytu = 'C';
	}
	printf("%c : %d la so lon nhat", kytu,Max);
}