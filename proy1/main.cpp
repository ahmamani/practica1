#include <iostream>

using namespace std;

int main()
{
    int a = 32766;
    int b = a + 1;
    cout << b << endl;
    b = b + 1;
    cout << b << endl;
    return 0;
}
