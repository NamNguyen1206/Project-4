#include<stdio.h>

void main() {
	int So;

	printf("Moi nhap so : ");
	scanf_s("%d", &So);


	if (So % 2 == 0 )
	{
		printf("%d la so chan", So);
	}
	else
	{
		printf("%d la so le", So);	
	}
}