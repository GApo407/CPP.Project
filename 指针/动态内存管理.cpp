#include "iostream"
using namespace std;
/*
    new 类型  new 类型[]
    delete 指针   delete[] 指针
 */
int main()
{
    int * p = new int ;  // 申请4个字节的int类型内存空间
    * p = 10 ;
    cout << "new申请的4字节空间内，存放的是:" << *p << endl;
    delete p ;

    // 错误！！ delete所删除的数据需为指针
    // int num = 10;
    // cout << num << endl;
    // delete num;

    int * p_arr = new int[5]; // 申请5个元素可以存放int类型的数组空间
    // p_arr的地址就是数组空间的内存区域的开头 （第一个元素的位置）
    p_arr[0] =10;  // 等同于 *p_arr = 10;
    p_arr[1] =20;  // 等同于 *(p_arr+1) =10;
    p_arr[2] =30;
    *(p_arr+3) =50;
    p_arr[4]= 50;
    cout << "数组里第一个元素是: " << *p_arr << endl;
    cout << "数组里第二个元素是: " << *(p_arr+1) << endl;
    cout << "数组里第三个元素是: " << *(p_arr+2) << endl;
    cout << "数组里第四个元素是: " << *(p_arr+3) << endl;
    cout << "数组里第五个元素是: " << *(p_arr+4) << endl;
    delete p_arr;
    return 0;
}