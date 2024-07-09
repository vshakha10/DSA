#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int c = 10, d = 100;
    
    cout << "Enter your dis: ";
    cin >> a;
    cout << "Enter your dis1: ";
    cin >> b;
    
    cout.width(10);cout << a << " : " << c << endl;
    cout.width(10);cout << b << " : " << d << endl;

    return 0;
}