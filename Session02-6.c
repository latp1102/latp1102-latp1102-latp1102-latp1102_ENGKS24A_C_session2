#include<stdio.h>

int main(){
	// Khao báo float
	float pi = 3.14;
	float r = 4;
	
	// tinh chu vi, dien tich 
	float perimeter = 2 * pi * r;
	float area = pi * r * r;
	
	// In ket qua
	printf("Chu vi hinh tron la: %.f\n",perimeter);
	printf("Dien tich hinh tron la: %.f",area);
	
	return 0;
}
