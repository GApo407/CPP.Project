#include "iostream"
using namespace std;

int main()
{
    a:
    cout << "a" << endl;

    b:
    cout << "b" << endl;

    goto c;

    c:
    cout << "c" << endl;

    d:
    cout << "d" << endl;
    
    int i = 1;
    loop:
    cout << i << endl;
    i++;
    if(i <= 10)
    {
        goto loop;
    }
    return 0;
}