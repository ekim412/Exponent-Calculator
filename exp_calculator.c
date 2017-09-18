/* Acts as an exponential calculator. 
   By Edward Kim 
   */
#include <stdio.h>

/* Recursive function to calculate value given a base and exponent */
unsigned int recursivePower(unsigned int a, int n){
  /* If exponent is 0 */
  if(n == 0)
    return 1;
  double x = recursivePower(a, n/2);

  /* If exponent is even */
  if(n%2==0)
    return x*x;
  
  /* If exponent is odd */
  else
    return a*x*x;
}

int main()
{
  float base;
  int exponent;
  
  printf("Enter a base number: ");
  scanf(" %f", &base);

  /* Make sure the base is positive number */
  if(base>=0){
    printf("Enter exponent number: ");
    scanf(" %d", &exponent);

    printf("The value of the exponent is %d\n", recursivePower(base, exponent));
  }
  /* If the base is not a positive number */
  else{
    printf("Base is negative.\n");
  }
  return 0;
}


