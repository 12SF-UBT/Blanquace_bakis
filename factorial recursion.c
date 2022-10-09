#include<stdio.h>
//to print the factorial of n 
int f (int n);

int
main ()
{
  int n;
  scanf ("%d", &n);
  printf ("%d", f (n));
  //sum(n);

  return 0;
}

int
f (int n)
{
  if (n == 1)
    {
      return 1;
    }
  int fnm1 = f (n - 1);
  int fn = fnm1 * n;
  //printf("%d",sum());

}
