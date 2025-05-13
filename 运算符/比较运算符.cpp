#include "iostream"
#include "cstring"
using namespace std;

int main() {
    //   ==相等  ！=不等   >大于   <小于  >=大于等于  <=小于等于
    // 0 false 假  1 true 真
    int s1 = 3;
    int s2 = 5;
    bool s3 = s1 == s2;
    bool s4 = s1 != s2;
    cout << "s1 == s2 : " << s3 << endl;
    cout << "s1 != s2 : " << s4 << endl;

    cout << "3 > 5 : " << (3 > 5) << endl;
    cout << "3 < 5 : " << (3 < 5) << endl;
    cout << "3 >= 5 : " << (3 >= 5) << endl;
    cout << "3 <= 5 : " << (3 <= 5) << endl;

    // 字符串的比较
    // C语言风格字符串 char s[]     char *s   "hello world"
    // C语言风格字符串 直接应用比较运算符 比较的是内容地址，而不是内容
    char a[] = "hello";
    char *b = "hello";
    // 错误示范  cout << " a == b : " << (a == b) << endl;
    // strcmp进行比较  输出结果为：0相等  -1小于  1大于
    cout << "a == b : " << strcmp(a,b) << endl;
    // 字面常量比较
    cout << "字符串字面比较 c 是否大于 a ：" << strcmp("c","a") << endl;

    // c++ 风格字符串  string类型都是c++风格字符串
    // 在比较中只要有1个c++风格字符串 就可以用比较运算符
    string s5 = "a";
    char s6[] = "b";
    cout << "s5 == s6 :" << (s5 == s6) << endl;


    return 0;
}
