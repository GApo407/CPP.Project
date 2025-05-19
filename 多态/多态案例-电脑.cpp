#include <iostream>
using namespace std;

// CPU
class CPU{
public:
   // 纯虚函数   // calculate（计算）
   virtual void calculate() = 0;

   // 虚析构函数  // default（默认）
   virtual ~CPU() = default;
};

// 显卡  // VideoCard（显卡）
class VideoCard{
public:
   // 纯虚函数   // display（展示）
   virtual void display() = 0;

   // 虚析构函数
   virtual ~VideoCard() = default;
};

// 内存
class Memory{
public:
   // 纯虚函数   // storage（存储）
   virtual void storage() = 0;

   // 虚析构函数
   virtual ~Memory() = default;
};

// Inter厂商
class Inter : public CPU{
public:
   void calculate() override{
      cout << "Inter' CPU start calculate" << endl;
   }
};

class InterVideoCard : public VideoCard{
public:
   void display() override{
      cout << "Inter' VideoCard start display" << endl;
   };
};

// NVIDIA
class NvidiaVideoCard : public VideoCard{
public:
   void display() override{
      cout << "NVIDIA' VideoCard start display" << endl;
   };
};

// SAMSUNG
class SamsungMemey : public Memory{
public:
   void storage() override{
      cout << "Samsung' Memey start storage" << endl;
   };
};

class Computer{
private:
   CPU *m_cpu;
   VideoCard *m_videocard;
   Memory *m_memey;

public:
   Computer(CPU *cpu, VideoCard *video, Memory *memey){
      m_cpu = cpu;
      m_videocard = video;
      m_memey = memey;
   }

   void work()const{
      m_cpu->calculate();
      m_videocard->display();
      m_memey->storage();
   }
};

int main(){
   CPU *cpu = new Inter;
   VideoCard *video = new NvidiaVideoCard;
   Memory *memey = new SamsungMemey;
   VideoCard *video2 = new InterVideoCard;

   Computer computer1(cpu, video, memey);
   computer1.work();
   cout << "-----------------" << endl;
   Computer computer2(cpu, video2, memey);
   computer2.work();
   delete cpu;
   delete video;
   delete memey;
   delete video2;
}
