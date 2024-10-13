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

    // Перевод в двоичную
    bitset<32> y (x);
    // Замена i-го бита на 0
    y = y.reset(i - 1);
    // Перевод в десятичную
    cout << y.to_ulong();
}