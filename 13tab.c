#include <stdio.h>
int main ()
{
    int a,b;
    printf ("a=");
    scanf ("%d",&a);
    printf ("b=");
    scanf ("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf ("novo a=%d",a);
    printf ("\nnovo b=%d",b);
    return 0;
}
