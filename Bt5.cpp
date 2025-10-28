#include<stdio.h>

void main() {
	char kytu;

	printf("Moi nhap ky tu : ");
	scanf_s("%c", &kytu);

    // Kiểm tra xem ký tự có phải là chữ cái không
    if ((kytu >= 'a' && kytu <= 'z') || (kytu >= 'A' && kytu <= 'Z')) 
    {
        // Kiểm tra xem là chữ thường
        if (kytu >= 'a' && kytu <= 'z') 
        {
            printf("'%c' là chu cai viet thuong.\n", kytu);
        }
        // Kiểm tra xem là chữ hoa
        else 
        {
            printf("'%c' là chu cai viet hoa.\n", kytu);
        }
    }
    else {
        // Thông báo nếu không phải là chữ cái
        printf("Ban đa nhap khong phai la ky tu chu cai.\n");
    }
}