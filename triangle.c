#include <stdio.h>
#include <string.h>
int main(void) {
  int side1,side2,side3;
  printf("Enter the length of side 1\n");
  scanf("%d",&side1);
  printf("Enter the length of side 2\n");
  scanf("%d",&side2);
  printf("Enter the length of side 3\n");
  scanf("%d",&side3);
  if((side1==side2)&&(side1==side3)){
    printf("Equilateral Triangle");
  }
  else if( (side1==side2) ||(side1==side3)||(side2==side3) ){
    printf("Isoceles");

  }
  else{
    printf("Scalene");
  }


}
