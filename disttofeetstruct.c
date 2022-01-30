#include <stdio.h>

int main(void) {
	  struct dist{
	    double feet;
	    double inch;

	  };
	  struct dist l1,l2;
	  double totf,inch;
	  printf("Enter Distance 1 in feet");
	  scanf("%lf",&l1.feet);
	  printf("Enter Distance 1 in inches");
	  scanf("%lf",&l1.inch);
	  printf("Enter Distance 2 in feet");
	  scanf("%lf",&l2.feet);
	  printf("Enter Distance 2 in inches");
	  scanf("%lf",&l2.inch);

	  if (l1.inch+l2.inch>=12){
	    totf=l1.feet+l2.feet+(int)(l1.inch+l2.inch)/12;
	    inch=(int)(l1.inch+l2.inch)%12;
	    printf("%.2f Feet and %.2f inches \n",totf,inch);
	  }
	  else{
	    printf("%.2f Feet and %.2f inches \n",l1.feet+l2.feet,l1.inch+l2.inch);
	  }
	 
	  return 0;
}
