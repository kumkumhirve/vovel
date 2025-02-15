#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter charactor" << endl;
    cin >> ch;
    if (ch == 'a' || ch == 'o' || ch == 'i' || ch == 'u' || ch == 'e')
    {
        cout << "vovel" << endl;
    }
    else
        cout << "consonent" << endl;
    return 0;
}