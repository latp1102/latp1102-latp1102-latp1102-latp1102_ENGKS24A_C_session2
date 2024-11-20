#include<stdio.h>

int main(){
	
	// Khai bao mot bien kieu int luu tru môt sô nguyen
	int age = 18; // Tuoi cua mot nguoi
	// Khai bao mot bien kieu float luu tru mot so thuc
	float height = 1.70; // Chieu cao cua mot nguoi
	// Khai bao mot bien kieu double luu tru mot so thuc
	double pi = 3.14; // Gia tri cua so pi
	// Khai bao mot  bien kieu char luu tru kı tu
	char grade = 'A'; // Diem so cua hoc sinh
	// Khai bao mot bien kieu long integer luu tru cac gia tri so ngyen lon nhat
	long bigNumber = 2345; // Gia tri lon nhát cua long
	
	// In ra cac gia tri
	printf("Age: %d\n", age);
	printf("Height: %.2f\n", height);
	printf("%Pi: %14lf\n", pi);
	printf("Grade: %c\n", grade);
	printf("Big Number: %lld\n", bigNumber);
	
	return 0;
}
	

	
