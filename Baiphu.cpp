#include<stdio.h>

#define LV1 1000
#define LV2 1200
#define LV3 1600
#define LV4 2000


void main()
{
	int SoKwTieuthu, ThanhTien;
	printf("Moi nhap so KW tieu thu: ");
	scanf_s("%d", &SoKwTieuthu);

	// Header
	printf("\n\n%20s%15s%15s", "So KW tieu thu", "Don gia", "Thanh tien\n");
	printf("==========================================================\n");

	if (SoKwTieuthu<=100)
	{
		ThanhTien = SoKwTieuthu * LV1;
		printf("%20d%15d%15d", SoKwTieuthu, LV1, SoKwTieuthu * LV1);
	}
	else if (SoKwTieuthu>100 && SoKwTieuthu<=150)
	{
		ThanhTien = 100 * LV1 + (SoKwTieuthu - 100) * LV2;
		printf("\n%20d%15d%15d", 100, LV1, 100 * LV1);
		printf("\n%20d%15d%15d", (SoKwTieuthu - 100), LV2, (SoKwTieuthu - 100) * LV2);
	}
	else if (SoKwTieuthu>150 && SoKwTieuthu<=200)
	{
		ThanhTien = 100 * LV1 + 50 * LV2 + (SoKwTieuthu - 150) * LV3;
		printf("\n%20d%15d%15d", 100, LV1, 100 * LV1);
		printf("\n%20d%15d%15d", 50, LV2, 50 * LV2);
		printf("\n%20d%15d%15d", (SoKwTieuthu - 150), LV3, (SoKwTieuthu - 150) * LV3);
	}
	else
	{
		ThanhTien = 100 * LV1 + 50 * LV2 + 50 * LV3 + (SoKwTieuthu - 200) * LV4 ;
		printf("\n%20d%15d%15d", 100, LV1, 100 * LV1);
		printf("\n%20d%15d%15d", 50, LV2, 50 * LV2);
		printf("\n%20d%15d%15d", 50, LV3, 50 * LV3);
		printf("\n%20d%15d%15d", (SoKwTieuthu - 200), LV4, (SoKwTieuthu - 200) * LV4);
	}

	printf("\n==========================================================\n");
	printf("\nCong %15d%30d",SoKwTieuthu,ThanhTien);
}