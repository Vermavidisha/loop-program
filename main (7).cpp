/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int i=1,n,m;
    std::cout<<"Enter the number";
    std::cin>>n;
    for(i=1; i<=10;i=i+1)
    {
        m=n*i;
        std::cout<<m<<endl;
    }

    return 0;
}
