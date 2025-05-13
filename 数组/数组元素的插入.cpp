#include "iostream"
using namespace std;

int main()
{
  // 旧数组 示例数组
  int * pArr = new int[5] {1, 3, 5, 7, 9};

  // 创建一个新数组
  int * pNewarr = new int[7];

  // 循环新数组，挨个进行元素填充（非插入的位置，填充老数组元素，插入位置填充新元素）
  int offset = 0;  // 偏移量用来控制新老数组元素的下标对照
  for (int i = 0; i < 7; i++)
  {
    if(i == 1)
    {
      offset++;
      pNewarr[1] = 11;
      continue;
    }
    else if (i == 3)
    {
      offset++;
      pNewarr[3] = 66;
      continue;
    }
    // 不是插入位置，从老数组中提取元
    pNewarr[i] = pArr[i - offset];
  }

  for (int i = 0; i < 7; i++)
  {
    cout << "新数组的元素为：" << pNewarr[i]<< endl;
  }

  delete pArr;
  pArr = pNewarr;
  return 0;
}