#include <iostream>
using namespace std;

class Person
{
public:
   int age{};
   void show_class_name()
   {
      cout << "This class name" << endl;
   }

   void show_student_name()
   {
      // 解决
      if (this == nullptr)
      {
         return;
      }
      // 报错原因是因为传入的指针是为nullptr即为空 空对象访问不到age
      cout << "age = " << this->age << endl;
   }

};

void test01()
{
   Person* p1 = nullptr;
   //p1->show_class_name();
   p1->show_student_name();
}
int main()
{
   test01();
   return 0;
}