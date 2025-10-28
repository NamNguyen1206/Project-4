#include<stdio.h>

void main() 
{
	float Diemtoan, Diemvan, Diemanh, DTB;
	printf("Moi nhap diem toan : ");
	scanf_s("%f", &Diemtoan);
	printf("Moi nhap diem van : ");
	scanf_s("%f", &Diemvan);
	printf("Moi nhap diem anh : ");
	scanf_s("%f", &Diemanh);

	DTB = (Diemtoan + Diemvan + Diemanh) / (float)3;
	printf("DTB la : %f", DTB);

	if (DTB>=8.5)
	{
		printf("\nHs xep loai A");
	}
	else if (DTB>=6.5 && DTB<= 4.49)
	{
		printf("\nHs xep loai B");
	}
	else if (DTB >= 5 && DTB <= 6.49)
	{
		printf("\nHs xep loai C");
	}
	else if (DTB >= 3.5 && DTB <= 4.99)
	{
		printf("\nHs xep loai D");
	}
	else
	{
		printf("\nHs xep loai F");
	}
}