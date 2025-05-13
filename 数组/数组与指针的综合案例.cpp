#include "iostream"
using namespace std;

int main()
{
  // 动态分配一个包含10个整数的数组，并初始化为指定值
  int * pArr = new int[10] {3, 5, 1, 11, 99, 66, 22, 2, 8, 6};

  int min;
  int min_index;
  for (int i = 0; i < 9; i++)
  {
    for (int j = i; j < 10; j++)
    {
      if (j == i)
      {
        min = pArr[j];
        min_index = j;
      }
      if (pArr[j] < min)
      {
        min = pArr[j];
        min_index = j;
      }
    }
      int tmp = pArr[i];
      pArr[i] = pArr[min_index];
      pArr[min_index] = tmp;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << pArr[i] << ",";
  }
    delete[] pArr;
  return 0;
}