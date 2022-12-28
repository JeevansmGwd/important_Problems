#include <stdio.h>  
  
int main()  
{  
    float width, perimeter,height;  
  
    printf("Enter height of Rectangle\n");  
    scanf("%f", &height);  
  
    printf("Enter width of Rectangle\n");  
    scanf("%f", &width);  
  
    perimeter = (height + width)*2;  
  
    printf("Perimeter of Rectangle is %f\n", perimeter);  
  
    return 0;  
}  