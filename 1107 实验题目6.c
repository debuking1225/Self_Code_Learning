#include "stdio.h"
int main()
{float r,h;
 scanf("%f%f",&r,&h);
 printf("%3.2f\n%3.2f\n%3.2f\n%3.2f\n",2*3.14*r,3.14*r*r,2*3.14*r*r+3.14*r*h*2,3.14*r*r*h);
  return 0;
}
