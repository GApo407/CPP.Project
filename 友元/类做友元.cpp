#include <iostream>
#include <variant>
using namespace std;

class Building;

class GoodGay
{
public:
   GoodGay();

   void visit() const; // 参观函数 访问Building中的属性

   Building *building;
   ~GoodGay();
};

class Building
{
   // GoodGay类是本类的好朋友，可以访问本类中私有成员
   friend class GoodGay;

public:
   Building();

public:
   string m_SittingRoom;  // 客厅

private:
   string m_BedRoom;  // 卧室
};

// 类内声明 类外赋值
Building::Building()
{
   m_SittingRoom = "客厅";
   m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
   // 创建建筑物对象
   building = new Building;
}

void GoodGay::visit() const
{
   cout << "好基友正在访问：" << building->m_SittingRoom << endl;
   cout << "好基友正在访问：" << building->m_BedRoom << endl;
}
GoodGay::~GoodGay()
{
   delete building;
}
void test01()
{
   GoodGay gg;
   gg.visit();
}
int main()
{
   test01();
   return 0;
}
