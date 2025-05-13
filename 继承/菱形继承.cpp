#include <iostream>
using namespace std;
// 菱形继承

// 动物类
class Animal{
public:
   int m_Age;
};

// 利用虚继承 解决菱形继承的问题
// 继承之前 加上关键字 virtual 变为虚继承
// Animal类称为 虚基类
// 羊类
class Sheep : virtual public Animal{
};

// 驼类
class Tuo : virtual public Animal{
};

// 羊驼类
class SheepTuo : public Sheep, public Tuo{
};

void test01(){
   SheepTuo st;

   st.Sheep::m_Age = 18;
   st.Tuo::m_Age = 28;

   // 当菱形继承，有两个父类拥有相同数据，需要加以作用域区分
   cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
   cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

   // 但是数据只需要一份，菱形继承导致数据有两份数据，资源浪费
   st.m_Age = 18;
   cout << "st.m_Age = " << st.m_Age << endl;
}

int main(){
   test01();
}
