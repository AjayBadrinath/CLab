#include <stdio.h>
#include <string.h>
int main(void) {
int a,b;
printf("Enter a number\n");
scanf("%d",&a);
printf("Enter the last number\n");
scanf("%d",&b);
for(int i=1;i<=b;i++){
  printf("%d x %d =%d \n",a,i,a*i);
}

}
