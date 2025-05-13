#include "iostream"
using namespace std;

int main()
{
    /*  if(条件)
 *  {
 *  }
 *  else if (条件)
 *  {
 *  }
 *  else if (条件)
 *  {
 *  }
 *  ...
 *
 *  else
 *  {
 *  }
 *
    */

    // 定义布尔变量以表示不同的条件
    bool mei = false;
    bool tian = false;
    bool xin = false;

    // 根据变量的值选择性地打印出对应的名字
    if (mei)
    {
        cout << "小美" << endl;
    }
    else if (tian)
    {
        cout << "小天" << endl;
    }
    else
    {
        cout << "小欣" << endl;
    }

    return 0;
}
