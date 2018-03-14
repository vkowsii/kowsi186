#include<stdio.h>
unsigned int nextPowerOf2(unsigned int n)
{
  unsigned count = 0;
  if (n && !(n&(n-1)))
    return n;
  while( n != 0)
  {
    n  >>= 1;
    count += 1;
  }
 
  return 1 << count;
}
int main()
{
  unsigned int n = 0;
  printf("%d", nextPowerOf2(n));
  return 0;
}
