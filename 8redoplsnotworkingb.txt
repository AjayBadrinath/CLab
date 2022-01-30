#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float sqroot(float ,float);
int main(void) {
float a,b,c,d;
printf("Enter coeffitient of  x^2\n");
scanf("%f",&a);
printf("Enter coeffitient of  x\n");
scanf("%f",&b);
printf("Enter constant\n");
scanf("%f",&c);
d=(pow(b,2)-4*a*c);

float random=rand()%(int)a;
if(d>=0){
  float pos=(-b+(sqroot(d,random))/2*a);
  float random=rand()%(int)a;
  float neg=-b-(sqroot(d,random))/2*a;
  printf("Roots are %f ,%f\n",pos,neg);
  printf("%f1\n",d);
  }
  else{printf("Complex root\n");};
//printf("%d\n",sqroot(a,random));


}

float sqroot(float a,float random){
  while(fabsf(a-random*random)>0.00001){
    random=(random+a/random)/2;
  }
  return random;
  
}
