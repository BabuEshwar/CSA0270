/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,m=0,flag=0;
    printf("enter the number to check the prime:");
    scanf("%d", &n);
    m=n/2;
    for(i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            printf("number is not prime");
            flag = 1;
            break;

        }
    }
    if(flag==0)
    printf("number is prime");
    return 0;
}
