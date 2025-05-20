#include <iostream>
#include <fstream>
using namespace std;

// 二进制文件 写文件
class Person{
public:
   char m_Name[64]; // 姓名
   int m_Age{}; // 年龄
};

void test01(){
   // 1.包含头文件

   // 2.创建流对象
   ofstream ofs("/home/starr/文档/Cpp.Project/文件操作/二进制文本-写-读", ios::out | ios::binary); // out 以写文件方式打开  binary以二进制文本
   // 3.打开文件
   //ofs.open("/home/starr/文档/Cpp.Project/文件操作/二进制文本-写-读", ios::out | ios::binary);

   // 4.写文件
   Person p = {"Kimi", 18};
   ofs.write((const char *) &p, sizeof(Person));
   // 5.关闭文件
   ofs.close();
}

int main(){
   test01();
}
