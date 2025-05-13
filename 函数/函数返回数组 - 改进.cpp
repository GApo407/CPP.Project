
#include "iostream"
using namespace std;
// 参数1： 被处理的数组地址指针
// 参数2： 被处理的数组的长度（必须）
void fun(int * arr, int length)
{
  for(int i = 0; i < length; i++)
  {
    arr[i] = arr[i] + 1;
    cout << arr[i] << endl;
  }
}
int main()
{
  int arr[3] = {1,2,3};
  fun(arr,3);
  return 0;
}