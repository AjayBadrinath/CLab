#include <stdio.h>
int main(){
int a;
printf("Enter the number of elements in the array\n");
scanf("%d",&a);
int arr[a];
int s;
int l;
printf("Enter Start value:\n");
scanf("%d",&s);
printf("Enter End value:\n");
scanf("%d",&l);
printf("Enter the elements in the array\n");
for (int i=0;i<a;i++){
	scanf("%d",&arr[i]);
}
int b=0;
for (int i=s;i<=l;i++){
	for (int j=0;j<a;j++){
		if(arr[j]==i){
			b++;
}

}

printf("%d -%d times\n",i,b);
b=0;

}

}
