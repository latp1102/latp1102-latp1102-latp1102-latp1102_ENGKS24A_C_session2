#include<stdio.h>

int main(){
	// khai bao gia tri canh hinh vuong
	float edge_length = 3;
	float number_edge = 4;
		
	// tinh chu vi, dien tich
	float perimeter = number_edge * edge_length;
	float area = edge_length * edge_length;
	
	// In ket qua
	printf("Canh hinh vuong: %.f\n", edge_length);
	printf("Chu vi hinh vuong: %.f\n", perimeter);
	printf("Dien tich hinh vuong: %.f", area);
	
	return 0;
}
