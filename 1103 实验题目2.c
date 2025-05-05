#include "stdio.h"
int main()
{int a,b,c,d,e;
 scanf("%d",&a);
 b=(a/1000);
 c=((a-b*1000)/100);
 d=((a-b*1000-c*100)/10);
 e=a-b*1000-c*100-d*10;
 printf("%d%d%d%d",e,d,c,b);
 return 0;	   
}
