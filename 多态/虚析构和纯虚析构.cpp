#include <iostream>
#include <string>
using namespace std;

// 虚析构和纯虚析构

class Animal {
public:
    Animal() {
        cout << "Animal 构造函数调用" << endl;
    }
    // 纯虚函数
    virtual void speak() = 0;
    ~Animal() {
        cout << "Animal 构造函数调用" << endl;
    }
};

class Cat : public Animal {
public:
    explicit Cat(string name) {
        cout << "Cat的构造函数调用" << endl;
        m_Name = new string(std::move(name));
    }

    void speak() override {
        cout << *m_Name << "小猫在讲话" << endl;
    }

    ~Cat() {
        if (m_Name != nullptr) {
            cout << "Cat的析构函数调用" << endl;
            delete m_Name;
            m_Name = nullptr;
        }
    }
    string *m_Name;
};

void test01() {
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal;
}

int main() {
    test01();
    return 0;
}
