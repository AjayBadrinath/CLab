#include <stdio.h>
void reversearray(int arr[],int n);
void swap(int*,int*);
int main(){
	int *a;
	int n;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);

	}
	printf("Original Array : \t");
	for(int j=0;j<n;j++){
		printf("%d\t",arr[j]);
	}
	printf("\n------------------\n");
	reversearray(arr,n);
	printf("Reversed Array : \t");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void reversearray(int arr[],int n){
	int *ptr;
	int *bp;
	int temp;
	bp=arr;
	ptr=&arr[n];
	ptr--;
	for (int i=0;i<n;i++){
		swap(bp,ptr);
		bp++;
		ptr--;
		if(ptr<bp){
			break;
		}

	}
}

void swap(int *bp,int*ptr){
	int temp=*bp;
	*bp=*ptr;
	*ptr=temp;
}
