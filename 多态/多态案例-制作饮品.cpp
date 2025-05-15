#include <iostream>
using namespace std;

class AbstractDrinking {
public:
   // 煮水
   virtual void Boil() = 0;

   // 冲泡
   virtual void Brew() = 0;

   // 导入杯中
   virtual void PourInCup() = 0;

   // 加入辅料
   virtual void PutSomething() = 0;

   // 制作饮品
   void makeDrink() {
      Boil();
      Brew();
      PourInCup();
      PutSomething();
   }
};

// 制作咖啡
class Coffee : public AbstractDrinking {
public:
   // 煮水
   void Boil() override {
      cout << "煮水" << endl;
   };

   // 冲泡
   void Brew() override {
      cout << "冲泡咖啡" << endl;
   };

   // 倒入杯中
   void PourInCup() override {
      cout << "倒入杯中" << endl;
   };

   // 加入辅料
   void PutSomething() override {
      cout << "加入糖和牛奶" << endl;
   };
};

// 制作茶叶
class Tea : public AbstractDrinking {
public:
   // 煮水
   void Boil() override {
      cout << "煮水" << endl;
   };

   // 冲泡
   void Brew() override {
      cout << "冲泡茶叶" << endl;
   };

   // 倒入杯中
   void PourInCup() override {
      cout << "倒入杯中" << endl;
   };

   // 加入辅料
   void PutSomething() override {
      cout << "加入枸杞" << endl;
   };
};

void doWork(AbstractDrinking *abs) {
   //AbstractDrinking * abc = new Coffee
   abs->makeDrink();

   delete abs; // 释放内存
}

void test01() {
   // 制作咖啡
   doWork(new Coffee);

   cout << "--------------------" << endl;
   // 制作茶叶
   doWork(new Tea);
}

int main() {
   test01();
}
