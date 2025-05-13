#include <iostream>
using namespace std;

// 继承方式
class Base1{
public:
   int m_A;

protected:
   int m_B;

private:
   int m_C;
};

// 公共继承 public
class Son1 : public Base1{
public:
   void func(){
      m_A = 10; // 父类中的公共权限成员 到子类中依然是公共权限
      m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
      //m_C = 10; // 父类中的私有权限成员 到子类中访问不到
   }
};

void test01(){
   Son1 s1;
   s1.m_A = 100;
   // s1.m_B = 100; // 到Son1中 m_B是保护权限 类外访问不到
}

// 保护继承 protected
class Son2 : protected Base1{
public:
   void func(){
      m_A = 100; // 父类中公共成员 到子类中变为保护权限
      m_B = 100; // 父类中保护成员 到子类中变为保护权限（也就是无变化）
      //m_C = 100; // 父类中私有成员 子类无法访问
   }
};

void test02(){
   Son2 s2;
   //s2.m_A = 1000; // 在Son2中 m_A是保护权限 类外无法访问
   //s2.m_B = 1000; // 在Son2中 m_B是保护权限 类外无法访问
}

// 私有继承
class Son3 : private Base1{
public:
   void func(){
      m_A = 100; // 父类中公共成员 到子类中变为 私有成员
      m_B = 100; // 父类中保护成员 到子类中变为 私有成员
      // m_C = 100; // 父类私有成员 类外无法访问
   }
};

void test03(){
   Son3 s3;
   //s3.m_A = 1; // 到Son3中 变为 私有成员 类外无法访问
   //s3.m_B = 1; // 到Son3中 变为 私有成员 类外无法访问
}

class GrandSon3 : public Son3{
public:
   void func(){
      m_A = 10; // 到了Son3中 m_A变为私有
      m_B = 10; // 到了Son3中 m_B变为私有
   }
};
