#include "iostream"
using namespace std;

int main()
{
    int line = 1;
    while (line < 10){
        int num = 1;
        while (num <= line){
            cout << line << "x" << num << "=" << line * num << "\t";
            num++;
        }
        line++;
        cout << endl;
    }

    return 0;
}