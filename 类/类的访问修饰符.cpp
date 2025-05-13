#include <iostream>
using namespace std;

/*
 -访问修饰符 应用在成员上，对成员进行权限保护
 -在类的设计阶段（类内部），没有任何限制
 -基于类生产的的对象，是否能访问成员，被访问修饰符控制
 -public；公开
 -private；私有
   */
class Wukong;    // 声明
class Wukong
{
  public:
    int id;            // 游戏编号
    string name;       // 游戏名称

    void say_hi()
    {
      cout << "id: " << id << " 名字: " << name << endl;
    }
    void fight()
    {
      cout << "通过打怪，获得了游戏币" << endl;
      add_money();
    }
    void action()
    {
      cout << "通过完成任务获得了游戏币！" << endl;
      add_money();
    }
    void show_money()
    {
      cout << "游戏币数量：" << money << endl;
    }

    private:
      int money = 0;   //游戏币数量

      void add_money()
      {
        money += 1000;
      }
};

int main()
{
  class Wukong wk;
  wk.id = 9, wk.name = "大黄";
  wk.say_hi();

  wk.fight();
  wk.action();
  wk.show_money();
  return 0;
}