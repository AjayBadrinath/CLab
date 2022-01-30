#include <stdio.h>
#include <string.h>
int main(){
FILE *fptr;
char data[50];
fptr=fopen("fileop.c","r");
if (fptr==NULL){
puts("Cannot open file");

}
else{
while(fgets(data,50,fptr)!=NULL){
printf("%s",data);

}
fclose(fptr);
}
}
