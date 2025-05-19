#include <iostream>
using namespace std;
#include <fstream>
// 文本文件 写文件
void test01(){

   // 1. 包含头文件 fstream

   // 2.创建流对象
   ofstream ofs;

   // 3.指定打开方式
   ofs.open("/home/starr/文档/Cpp.Project/文件操作/文本-写-读",ios::out);

   // 4.写内容
   ofs << "Kimi" << endl;
   ofs << "Tom" << endl;
   ofs << "Vec" << endl;

   // 关闭文件
   ofs.close();
}

int main(){
   test01();
}