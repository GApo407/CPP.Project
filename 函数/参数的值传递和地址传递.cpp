#include "iostream"
using namespace std;

void switch_num(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void switch_num_pointer(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    // 仅有赋值作用不会对值造成影响（值传递）
    int x = 1;
    int y = 2;
    switch_num(x,y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << endl;

    // 赋予值的内存地址 会对值进行改变（地址传递）
    switch_num_pointer(&x, &y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}