#include <iostream>
#include <cstdlib>
using namespace std;
/*
*  需求，一个新的结构（class）能够在内部封装，属性（变量）和行为（函数），作为整体使用
*/
class AlarmClock           // 比喻成一张设计闹钟图纸
{
  public:
    double length_cm;   // 长度
    double width_cm;    // 宽度
    double height_cm;   // 高度

  //封装行为，响铃和say_hi
    void clock_ring(int freq, int duration)
    {
      // 给定的频率和给定的延时时间，发出声音
      char cmd[100];
      snprintf(cmd, sizeof(cmd),"beep -f %d -l %d", freq,duration);
      system(cmd);
    }
    void say_hi()const
    {
      cout << "长度" << length_cm << "cm. ";
      cout << "宽度" << width_cm << "cm. ";
      cout << "高度" << height_cm << "cm. ";
    }
};
int main()
{
  // 生产实体(基于类得到的实体： 闹钟1）
  AlarmClock ac1 = {5,9,7};
  cout << "闹铃的长度：" << ac1.length_cm << endl;
  cout << "闹铃的宽度：" << ac1.width_cm << endl;
  cout << "闹铃的高度" << ac1.height_cm << endl;

  ac1.clock_ring(1000,3000);
  ac1.say_hi();

  //闹钟2
  AlarmClock ac2 = {9,2,7};
  ac2.clock_ring(10000,30000);
  ac2.say_hi();
  return 0;
}