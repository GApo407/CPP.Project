#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 文本文件 读文件
void test01(){
   // 1.包含头文件

   // 2.创建流对象
   ifstream ifs;
   // 3.打开文件 并且判断是否打开成功
   ifs.open("/home/starr/文档/Cpp.Project/文件操作/文本-写-读", ios::in);

   if (!ifs.is_open()){
      cout << "文件打开失败" << endl;
      return;
   }
   // 4.读数据

   // 第一种
   // char buff[1024] = {};
   // while (ifs >> buff){
   //    cout << buff << endl;
   // }

   // 第二种
   // char buff[1024] = {};
   // while (ifs.getline(buff,sizeof(buff))){
   //    cout << buff << endl;
   // }

   // 第三种
   string buff;
   while (getline(ifs, buff)){
      cout << buff << endl;
   }

   // 第四种
   // char c;
   // while ((c = ifs.get()) != EOF){  // End if file
   //    cout << c << endl;
   // }
   // 5.关闭文件
   ifs.close();
}

int main(){
   test01();
}
