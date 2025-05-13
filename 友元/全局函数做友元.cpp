#include <iostream>
using namespace std;

// 建筑物类
class Building
{
   // goodGay 全局函数是 Building好朋友，可以访问Building中私有成员
   friend void goodGay(const Building *p);
public:
   Building()
   {
      m_SittingRoom = "客厅";
      m_BedRoom = "卧室";
   }

public:
   string m_SittingRoom; // 客厅
private:
   string m_BedRoom; // 卧室
};

// 全局函数
void goodGay(const Building *p)
{
   cout << "好基友全局函数 正在访问：" << p->m_SittingRoom << endl;
   cout << "好基友全局函数 正在访问：" << p->m_BedRoom << endl;
}

void test01()
{
   Building building;
   goodGay(&building);
}

int main()
{
   test01();
   return 0;
}
