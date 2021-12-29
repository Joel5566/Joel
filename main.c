
#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter the angles of a triangle (in degress):\n" );
  printf("a = ");
  scanf("%d", &a);
  printf("b = ");
  scanf("%d", &b);
  printf("c = ");
  scanf("%d", &c);

  if (a + b + c!= 180)
    printf("Invalid Angles\n");
    else if (a == b && b == c)
    printf("Equilateral Triangle\n");
    else if (a==b || b==c || c==a )
    printf("isoseles\n");
    else
    printf("scalene\n");
    return 0;
}