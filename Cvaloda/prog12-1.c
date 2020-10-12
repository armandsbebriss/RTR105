#include <stdio.h>
int main()
{

 char a = 5;
 char b = 1;
 char c = a << b;
 printf("%d << %d = %d\n",a,b,c);
 b = 2;
 c = a << b;
 printf("%d << %d = %d\n",a,b,c);
 b = 3;
 c = a << b;
 printf("%d << %d = %d\n",a,b,c);

}
