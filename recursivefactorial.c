#include <stdio.h>
int fact(int a);
int main(){
  int a,b,c;
  printf("Enter your number");
  scanf("%d",&a);
  //printf("%d",fact(a));
  int sum=0;
  int org=a;
  while(a>0){
    b=a%10;
    a=a/10;
    sum+=fact(b);


  }
  (sum==org)?printf("Strong number\n"):printf("Not a strong number\n");
  
}
int fact(int a){
  int factorial=1;
  for (int i=1;i<=a;i++){
    factorial*=i;
  }
return factorial;
}
