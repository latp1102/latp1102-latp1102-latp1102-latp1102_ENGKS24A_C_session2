#include<stdio.h>

int main(){
	// khai bao gia tri canh hinh vuong
	float side = 4;
	
	// tinh chu vi, dien tich
	float perimeter = 3 * side;
	float area = side * side;
	
	// In ket qua
	printf("Canh hinh vuong: %.f\n", side);
	printf("Chu vi hinh vuong: %.f\n", perimeter);
	printf("Dien tich hinh vuong: %.f", area);
	
	return 0;
}
