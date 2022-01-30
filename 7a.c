#include <stdio.h>
int main(){
int row,col;
int row1,col1;
printf("Enter number of rows\n");
scanf("%d",&row);
printf("Enter number of cols\n");
scanf("%d",&col);
printf("Enter number of rows1\n");
scanf("%d",&row1);
printf("Enter number of cols1\n");
scanf("%d",&col1);
int arr[row][col];
int arr1[row1][col1];
int mul[row][col1];
printf("Enter Elements of matrix1:\n");
for (int i=0;i<row;i++){
	for (int j=0;j<col;j++){
		scanf("%d",&arr[i][j]);
	}

}
printf("Enter Elements of second matrix:\n");
for (int i=0;i<row1;i++){
	for (int j=0;j<col1;j++){
		scanf("%d",&arr1[i][j]);
	}

}
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		mul[i][j]=0;
		for(int k=0;k<col;k++){
			mul[i][j]+=arr[i][k]*arr1[k][j];
	}

}

}
for (int i=0;i<row;i++){
	for(int j=0;j<col1;j++){
		printf("%d\t",mul[i][j]);
	}
printf("\n");
}
}
