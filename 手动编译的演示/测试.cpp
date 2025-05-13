#include "iostream"
using namespace std;
void num(int a)
{
  static int num = 1;
}
int main()
{
  cout << &num << endl;
  return 0;
}