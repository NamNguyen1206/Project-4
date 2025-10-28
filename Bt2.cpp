#include<stdio.h>

void main() {
	int Nam;
	
	printf("Moi nhap nam : ");
	scanf_s("%d", & Nam);


	if (Nam%400 == 0 || (Nam%4 == 0 && Nam%100 != 0))
	{
		printf("%d la nam nhuan", Nam);
	}
	else
	{
		printf("%d la nam khong nhuan", Nam);
	}
}