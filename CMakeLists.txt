cmake_minimum_required(VERSION 3.10)
project(CPP.Project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

file(GLOB_RECURSE SOURCES "*.cpp")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Executable files")

add_executable(Cpp.Project ${SOURCES}
        设计立方体类（多文件编程）/实现.cpp
        设计立方体类（多文件编程）/主函数.cpp
        点和圆的关系（多文件编程）/点的属性.h
        点和圆的关系（多文件编程）/圆的属性.h
        点和圆的关系（多文件编程）/圆的实现.cpp
        点和圆的关系（多文件编程）/点的实现.cpp
        点和圆的关系（多文件编程）/程序.cpp
        构造函数与析构函数/构造函数和析构函数.cpp
        构造函数与析构函数/构造函数的分类及调用.cpp
        构造函数与析构函数/拷贝构造函数调用时机.cpp
        构造函数与析构函数/构造函数调用规则.cpp
        构造函数与析构函数/深拷贝与浅拷贝.cpp
        构造函数与析构函数/初始化列表.cpp
        构造函数与析构函数/类对象作为类成员.cpp
        类/静态成员变量.cpp
        类/静态成员函数.cpp
        类/成员变量和成员函数分开存储.cpp
        类/this指针概念.cpp
        类/空指针访问成员函数.cpp
        类/const修饰成员函数.cpp
        友元/全局函数做友元.cpp
        友元/类做友元.cpp
        友元/成员函数做友元.cpp
        运算法重载/加号运算符重载.cpp
        运算法重载/左移运算符重载.cpp
        运算法重载/递增运算符重载.cpp
        运算法重载/赋值运算符重载.cpp
        结构体/共用体.cpp
        运算法重载/关系运算符重载.cpp
        运算法重载/函数调用运算符重载.cpp
        继承/继承的基本语法.cpp
        继承/继承方式.cpp
        继承/继承中的对象模型.cpp
        继承/继承中构造和析构顺序.cpp
        继承/继承同名成员处理方式.cpp
        继承/继承同名静态成员处理方式.cpp
        继承/多继承语法.cpp
        继承/菱形继承.cpp
        多态/多态基本概念.cpp
        文件操作/文本-写文件.cpp
        文件操作/文本-读文件.cpp
        多态/多态案例-电脑.cpp
        文件操作/二进制文件-写文件.cpp
)
