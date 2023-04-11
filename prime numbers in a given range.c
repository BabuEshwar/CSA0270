/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,i, flag;
    printf("enterthe end value\n: ");
    scanf("%d", &a);
    printf("enter the end value\n:");
    scanf("%d", &b);
    printf("\n prime nubers between %d and %d :", a, b);
    while(a<b)
    {
        flag = 0;
        for(i = 2; i <= a/2; i++)
        {
            if(a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        printf("%d", a);
        ++a;
    }
    printf("\n");
    return 0;
            
        

}
