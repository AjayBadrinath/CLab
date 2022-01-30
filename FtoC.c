#include <stdio.h>
#include <string.h>
int main(void) {
  float a;
  printf("Enter Farenheit:\n");
  scanf("%f",&a);
  printf("%.2f F is %.2f f degrees",a,(a-32)*5/9);
}
