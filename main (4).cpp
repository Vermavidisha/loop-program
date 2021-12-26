/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int i=0,n,sum=0;
    std::cout<<"Enter the number";
    std::cin>>n;
    for(i=0;i<=n;i=i+2)
    {
        
     sum=sum+i;   
    }
    std::cout<<sum;
}
