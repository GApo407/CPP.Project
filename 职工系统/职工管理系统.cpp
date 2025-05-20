#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// 职工类
class Staff{
public:
   // 职工编号
   int Staff_ID{};
   // 职工姓名
   string Staff_Name;
   // 职工职责
   string Staff_Responsibility;

   // 职责任务
   virtual void Staff_Job_Responsibility(){
   };

   // 职责任务存储
   string Work;

   // 纯虚析构函数
   virtual ~Staff() = default;
};

// 普通职工类
class Ordinary : public Staff{
public:
   void Staff_Job_Responsibility() override{
      Staff::Work = "完成经理交给的任务";
   };
};

// 经理类
class Manager : public Staff{
public:
   void Staff_Job_Responsibility() override{
      Staff::Work = "完成老板交给的任务,并下发任务给员工";
   };
};

// 老板类
class Boss : public Staff{
public:
   void Staff_Job_Responsibility() override{
      Staff::Work = "管理公司所有事物";
   };
};

// 使用动态数组存储职工信息
vector<Staff> staff;
// 增加职工信息
void AddStaff(){
   int num;
   cout << "请输入需要添加的职工数量: ";
   cin >> num;
   for (int i = 0; i < num; i++){
      Staff s;
      cout << "请输入第" << i + 1 << "位职工的编号:";
      cin >> s.Staff_ID;
      cout << "请输入第" << i + 1 << "位职工的姓名:";
      cin >> s.Staff_Name;
      bool a = true;
      while (a){
         cout << "请输入第" << i + 1 << "位职工的职责:";
         cin >> s.Staff_Responsibility;
         if (s.Staff_Responsibility == "普通职工"){
            Ordinary ordinary;
            ordinary.Staff_Job_Responsibility();
            a = false;
         }
         else if (s.Staff_Responsibility == "经理"){
            Manager manager;
            manager.Staff_Job_Responsibility();
            a = false;
         }
         else if (s.Staff_Responsibility == "老板"){
            Boss boss;
            boss.Staff_Job_Responsibility();
            a = false;
         }
         else{
            cout << "没有您所输入的职责请重新输入: " << endl;;
         }
      }
      staff.push_back(s);
   }
   ofstream ofs;
   ofs.open("/home/starr/文档/Cpp.Project/职工系统/职工信息文本", ios::out | ios::app);
   for (auto &i: staff){
      ofs << i.Staff_ID << " " << i.Staff_Name << " "
            << i.Staff_Responsibility << endl;
   }
   ofs.close();
};
// 显示职工信息
void DisplayStaff(){
   for (auto &i: staff){
      cout << "职工编号: " << i.Staff_ID;
      cout << " 职工姓名: " << i.Staff_Name;
      cout << " 岗位: " << i.Staff_Responsibility;
      cout << " 岗位职责： " << i.Work << endl;
   }
};
// 删除离职信息
void DeleteStaff(){
};
// 修改职工信息
void ReviseStaff(){
};
// 查找职工信息
void FindStaff(){
};
// 按照编号排序
void SortStaff(){
};
// 清空所有文件夹
void ClearFolders(){
};

int main(){
   bool a = true;
   cout << "欢迎来到职工管理程序" << endl;
   while (a){
      cout << "--------职工管理系统--------" << endl;
      cout << "-------1.退出管理系统-------" << endl;
      cout << "-------2.增加职工信息-------" << endl;
      cout << "-------3.显示职工信息-------" << endl;
      cout << "-------4.删除离职信息-------" << endl;
      cout << "-------5.修改职工信息-------" << endl;
      cout << "-------6.查找职工信息-------" << endl;
      cout << "-------7.按照编号排序-------" << endl;
      cout << "-------8.清空所有文档-------" << endl;
      cout << "请输入您的选择: ";
      int ChooseNum;
      cin >> ChooseNum;
      switch (ChooseNum){
         // 退出管理系统
         case 1:
            a = false;
            break;
         // 增加职工信息
         case 2:
            AddStaff();
            break;
         // 显示职工信息
         case 3:
            DisplayStaff();
            break;
         // 删除离职信息
         case 4:
            DeleteStaff();
            break;
         // 修改职工信息
         case 5:
            ReviseStaff();
            break;
         // 查找职工信息
         case 6:
            FindStaff();
            break;
         // 按照编号排序
         case 7:
            SortStaff();
            break;
         // 清空所有文件夹
         case 8:
            ClearFolders();
            break;
         default:
            cout << "输入无效请重新输入" << endl;
            break;
      }
   }
}
