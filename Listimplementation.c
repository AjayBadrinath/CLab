#include <stdio.h>
#include <string.h>
int main(void) {
  int u;
  printf("Enter the number of values you want to enter ");
  scanf("%d",&u);
   union Number{
    char number[50];
    int num;
    float fnum;
    double dnum;
  };
  struct arr{
   union Number a[10];
  };
  int o=u;
  struct arr k[u];
  //union number a;
  for(int j=0;j<u;j++){
  int n;
  printf("Which Format do you want to enter your number ?\n1.For Number name \n 2. Store as integer\n3.Store as Float\n4.Store as Double");
  scanf("%d",&n);
  if(n==1){
    char temp[50]="\0";
    printf("Enter the number name\n");
    scanf("%s",temp);
    strcpy(k[j].a[j].number,temp);
  }
  else if (n==2){
    printf("Enter the integer number");
    scanf("%d",&k[j].a[j].num);
  }
  else if(n==3){
    printf("enter the float number");
    scanf("%f",&k[j].a[j].fnum);
  }
  else if(n==4){
    printf("Enter the number of type double");
    scanf("%lf",&k[j].a[j].dnum);
  }
 
  }
  for(int i=0;i<o;i++){
    int s;
    printf("Enter the format you want to retrive element %d",i);
    printf("\n1.For Number name \n 2. Retrieve as integer\n3.Retrieve as Float\n4.Retrieve as Double");
    scanf("%d",&s);
    if(s==1){
    printf("%s\n",k[i].a[i].number);
  }
    else if (s==2){
      printf("%d\n",(int)k[i].a[i].num);
    }
    else if(s==3){
      printf("%f\n",(float)k[i].a[i].fnum);
    }
    else if(s==4){
      printf("%lf\n",(double)k[i].a[i].dnum);
    }

  }
  
  return 0;
}
