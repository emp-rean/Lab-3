#include <iostream>
#include <bitset>

using std::cin;
using std::cout;
using std::bitset;

int main() 
{   // Ввод значений
    int x, i;
    cout << "x = ";
    cin >> x;
    cout << "i = ";
    cin >> i;

    // Замена i-го бита на 0
    cout << (x & ~(1 << i - 1));
}