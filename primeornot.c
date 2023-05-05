#include <stdio.h>
int main() {
  int n, i, fl=0 ;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  
  for (i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0) 
    {
      fl = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (fl == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }

  return 0;
}
