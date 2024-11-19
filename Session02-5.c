#include <stdio.h>

int main() {
    
    int length = 10;
    int width = 5;   
    int perimeter;  
    int area;   

    
    perimeter = 2 * (length + width); 
    area = length * width;           

    
    printf("Chieu dai hinh chu nhat: %d\n", length);
    printf("Chieu rong hinh chu nhat: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d", area);

    return 0;
}
