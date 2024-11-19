#include<stdio.h>

int main() {
	float Pi = 3.14;
    float radius;  
    float circumference;  
    float area; 

   
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &radius);

    
    circumference = 2 * Pi * radius;
    area = Pi * radius * radius;

    
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f", area);

    return 0;
}

