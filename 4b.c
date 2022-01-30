#include <stdio.h>
int prime(int b){
int a,i,flag=0;
for(i=2;i<=((b/2)+1);i++){
	if (b==2){
		flag==0;
		break;
	}
	if (b%i==0){
		flag=1;
		break;

	}

}


if (flag==0){
	return 0;
}
else{
	return 1;
}
}
int main(){
int j,o;
for(j=3;j<=100;j++){

	if ( (prime (j)==0) && (prime (j+2)==0)  ){
		printf("%d %d\n",j,j+2);
}
}

}



