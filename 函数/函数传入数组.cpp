#include "iostream"
using namespace std;
/*
 * void func(int arr[]);
 * void func(int arr[10]);
 * void func(int * arr);
 * 三者完全一致，无论哪种方式，arr均被看做指针（地址传递）
 *
 * - 函数体内，sizeof无法统计数组大大小，得到的总是8(指针本身大小)
 * - 函数接受数组传入，一般建议附带数组长度（否则非常难以统计）
 */

// void function (int arr[])
// {
//     cout << "在function函数中内统计的数组总大小：" << sizeof(arr) << endl;
// }
void function(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {0,1,2,3,4,5,6,7};
    cout << "mian函数中的数组总长度：" << sizeof(arr) << endl;
    function(arr , 8);
    return 0;
}
