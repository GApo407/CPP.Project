#include "iostream"
using namespace std;

int main()
{
   /* enum 枚举类型名称{
    * 枚举元素,
    * 枚举元素,
    * 枚举元素,
    * ...,
    * ...,
    * }
   */
   enum Color
   {
      // 默认0开始
      RED
      , YELLOW
      , BLUE
   };
   // 询问小朋友喜欢的颜色: 红黄蓝三种选1个
   int num;
   cout << "小朋友们喜欢什么颜色(0红色 1黄色 2蓝色S): " << endl;
   cin >> num;

   switch (num)
   {
      case RED:
         cout << "小朋友们喜欢红色" << endl;
         break;
      case YELLOW:
         cout << "小朋友们喜欢黄色" << endl;
         break;
      case BLUE:
         cout << "小朋友们喜欢蓝色" << endl;
         break;
      default:
         cout << "不好意思您输入的数字有误" << endl;
   }
   return 0;
}
