//calculate eb bill  no of units -0-100 null ,101-200-0,201-500-3 fc 30
#include <stdio.h>
#include <math.h>
int main(){
double x;
double y;
double r;
double dist;
printf("Enter circle radius ");
scanf("%lf",&r);
printf("Enter x coordinate");
scanf("%lf",&x);
printf("Enter y coordinate");
scanf("%lf",&y);
dist=sqrt(pow(x,2)+pow(y,2));
if(dist<r){
printf("inside the circle");

}
else if(dist==r){
printf("On the circle");


}
else{

printf("Outside the circle ");
}
}
