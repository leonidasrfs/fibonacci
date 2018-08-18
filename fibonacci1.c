// fibonacci.c -- a simple first C program
/* compile with:
cc -g -o fibonacci fibonacci.c
*/
#include <stdio.h> // for printf()

long fibonacciRecur(long f1, long f2, int x, int n)
{
  if(x==n){return f2;}
  else{
    return fibonacciRecur(f2,f2+f1,x+1,n);
  }
} // recursive fibonacci function

int main (int argc, char *argv[])
{
    //Declaring n and fibonacci Nth number
    int n = 0;
    long fnum = 0;
    int CalcOption = 0;

    //Taking user's input, n
    printf("Hello. This calculates Nth Fibonacci Number\n");
    printf("Input n higher than 3: \n");
    scanf("%d", &n);

    printf("Now Input calc method, 1 - Simple, 2 - Recursive function: \n");
    scanf("%d", &CalcOption);
    //Calculate Nth fibonacci number based on inputed n using simple method

    if(CalcOption==1){
      long f1 = 1;
      long f2 = 1;
      long fint;
      int x;
      for (x=3; x<n+1; x++){
          fint = f1;
          f1 = f2;
          f2 = fint+f2;
          fnum = f2;
      }
    }else if (CalcOption==2) {
      fnum=fibonacciRecur(1,1,2,n);
    }

    //Output result
    printf ("the Nth Fibonacci number for n = ");
    printf("%d\n",n);
    printf (" is:\n");
    printf("%ld\n",fnum);

 return (0);
} // main
