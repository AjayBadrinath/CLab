#include <stdio.h>
#include <string.h>
int main(void) {
  //printf("%d",strcmp("Hello","Hi"));
  int n;
  
  printf("Enter the number of inputs\n");
  scanf("%d",&n);
  char  a[5][50];
  puts("\n");
  printf("Enter your strings\n");
  for (int i=0;i<n;i++){
    scanf("%s",a[i]);
  }
  char  temp[20]="\0";
  for (int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
      if (strcmp(a[i],a[j])>=1){
        strcpy(temp,a[j]);
        strcpy(a[j],a[i]);
        strcpy(a[i],temp);
        strcpy(temp,"\0");
      
      
        //
        //
      }

    }

  }
  for (int i=0;i<n;i++)
    printf("%s\n",a[i]);
  return 0;
}
