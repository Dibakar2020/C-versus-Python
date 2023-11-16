// factorial calculation using c code 
#include <stdio.h>
int factorial(int n);

int main() {
    int n = 4;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
// defining factorial function 

int factorial(int n)
{
    int s=1;
    for(int i=1; i<(n+1); i++)
    {
        s *=i;
    }
    return s;
}