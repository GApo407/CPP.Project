#include "iostream"
using namespace std;

int main()
{
  // 旧数组示例
  int * pArr = new int[5] {1,2,3,4,5,};
  // 创建一个新数组，将旧数组需要保留的复制到新数组
  int * pnewArr = new int[4];

  for(int i = 0; i < 5; i++)
  {
    if(i == 2)
    {
      continue;
    }
    if(i > 2)
    {
    pnewArr[i - 1] = pArr[i];
    }
    else
    {
      pnewArr[i] = pArr[i];
    }
  }
  // 可选
  pArr = pnewArr; // 将老数组的指针指向新数组的内存空间（可选，根据内存需要）

  for (int i = 0; i < 4; i++)
  {
    cout << "新数组的元素是：" << pnewArr[i] << endl;
  }
  delete[] pArr;
  delete[] pnewArr;
  return 0;
}