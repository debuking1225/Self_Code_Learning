#include "stdio.h"
int main()
{char str[3];int i;
  scanf("%c%c%c",&str[0],&str[1],&str[2]);
   for( i=0;i<3;i++)
    printf("%c", str[i]+3);   
    return 0;  
}
