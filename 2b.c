#include <stdio.h>
int main(){

int a ,b;
printf("Enter Number 1");
scanf("%d",&a);
printf("Enter Number 2");
scanf("%d",&b);
printf("a:%d\nb:%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Value of a after swapping\na:%d\nb:%d\n",a,b);

return 0;


}
