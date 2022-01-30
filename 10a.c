#include <stdio.h>
int main(){
int a,b;
printf("Enter a number a\n");
scanf("%d",&a);
printf("Enter another number b\n");
scanf("%d",&b);
printf("Values before swapping\na:%d\nb:%d\n",a,b);
swap(&a,&b);
printf("Values after swapping\na:%d\nb:%d\n",a,b);

}
void swap(int *a,int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
