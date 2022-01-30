#include <stdio.h>
void elements(int*,int*);
int main(){
int arr[]={1,234,44,45,48,87,874};
int *bp,*lp;
bp=&arr[0];
lp=&arr[6];
elements(bp,lp);
}
void elements(int* bp,int* lp){
if(bp<=lp){
	printf("%d\n",*bp);
	bp++;
	elements(bp,lp);
}
return;
}
