#include <stdio.h>
int count(int);
int b=0;
int main(){
long int a;
printf("Enter your number :\n");
scanf("%ld",&a);
printf("Sum of digits: %d\n",count(a));
printf("Number of digits:%d\n",b);
}
int count(int a ){
static int t,sum;
if(a>0){
	t=a%10;
	sum+=t;
	b++;
	a=a/10;
	count(a);
}

return sum;

}
