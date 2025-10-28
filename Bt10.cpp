#include<stdio.h>

#define LV1 15000
#define LV2 13500
#define LV3 11000

void main()
{
	int KM;
	int Tamtinh,Giamgia, Tongtien;

	printf("Moi nhap so km : ");
	scanf_s("%d", &KM);

	if ( KM<= 1)
	{
		Tamtinh = KM * LV1;
	}
	else if (KM<= 5)
	{
		Tamtinh = 1 * LV1 + (KM - 1) * LV2;
	}
	else
	{
		Tamtinh = 1 * LV1 + 4 * LV2 + (KM - 5) * LV3;
	}
	if (KM >= 20)
	{
		Giamgia = Tamtinh * 0.1;
	}
	else
	{
		Giamgia = 0;
	}

	Tongtien = Tamtinh - Giamgia;
	printf("So tien tam tinh la : %d VND", Tamtinh);
	printf("\nTong tien la : %20d VND", Tongtien);
}