#include <stdio.h>
int main()
{

 char a = 5;
 char b = 10;
 char c = a + b;
 printf("a+b=%d\n",a+b);
 printf("%d + %d = %d\n",a,b,c);
// +
 char d = a / b;// char / char -> char
 printf("%d / %d = %d\n",a,b,c);// gaidam 5 / 10 = 0.5, ne nav 0.5
 float dd = a / b;
 printf ("%d / %d = %f\n",a,b,dd);
 float aa = 5;
 dd = aa / b;
 printf("%.1f / %d = %.1f\n",aa,b,dd);
 
 printf("(float)%d / %d = %f\n",a,b,(float)a / b );
 printf("(float)a / b - rezultata izmers baitos - %ld\n", sizeof((float)a/ b));
// /
 char e = a % b;
 printf("%d %c %d = %d\n",a,37,b,e);
 return 0;
}
