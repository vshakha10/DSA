#include <iostream>
using namespace std;

int main()
{
    char i = 'A', n;
    do
    {
        cout <<i<<":"<<char(i+32)<<"\t";

        ++i;
    } 
    while (i <= 'Z');
    return 0;
}