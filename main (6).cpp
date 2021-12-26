/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
int character=0;
char ch='A';
do
{
        character=int(ch);
      
     std:: cout<<ch;
        character++;
        ch=char(character);
}while(ch<='Z');
}
