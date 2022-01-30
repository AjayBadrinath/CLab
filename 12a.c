#include <stdio.h>
void write(char filename[50],char data[50]);
void read(char filename[50],int seek );
int main(){

read("ajay.txt",3);
//write("ajay.txt","Hi how are you ?");
}
void write(char filename[50],char data[50]){
FILE *fptr;
fptr=fopen(filename,"a+");
if (fptr==NULL ){
	printf("Cannot open file\n");
}
else{
	fputs(data,fptr);
	fputs("\n",fptr);
}
fclose(fptr);
printf("Closed file");

}
void read(char filename[50],int seek){
FILE 	*fptr;

char data[50];
fptr=fopen(filename,"r");
fseek(fptr,seek,SEEK_SET);
if (fptr==NULL){
	printf("Cannot open file\n");
}
else{
	while(fgets(data,50,fptr)!=NULL){

		printf("%s",data);


}
fclose(fptr);
printf("Closed the file");
}

}
