#include<stdio.h>

void main()
{
	int luongcanban = 650000;
	float heso;
	float luong;
	int TNCT;

	printf("Moi nhap tham nien cong tac : ");
	scanf_s("%d", &TNCT);

	if (TNCT<12)
	{
		heso = 1.92;
		luong = heso * luongcanban;
	}
	else if (TNCT<36 && TNCT >= 12)
	{
		heso = 2.34;
		luong = heso * luongcanban;
	}
	else if (TNCT < 60 && TNCT >= 36)
	{
		heso = 3;
		luong = heso * luongcanban;
	}
	else
	{
		heso = 4.5;
		luong = heso * luongcanban;
	}
	printf("Luong la : %f", luong);
}