#include<stdio.h>
#include<math.h>
 
int main() {
   int s1, s2, angle;
   float area;
 
   printf("\nEnter Side1 : ");
   scanf("%d", &s1);
 
   printf("\nEnter Side2 : ");
   scanf("%d", &s2);
 
   printf("\nEnter included angle : ");
   scanf("%d", &angle);
 
   area = (s1 * s2 * sin((M_PI / 180) * angle)) / 2;
 
   printf("\nArea of Scalene Triangle : %f", area);
   return (0);
}