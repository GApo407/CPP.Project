 #include "iostream"
using namespace std;
// 获取数组长度: sizeof(数组对象) / sizeof(数组某个元素)

/*高级for循环获取数组每个元素:
for (元素类型 临时变量: 数组变量)
{
    临时变量即数组元素;
}*/

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    //while
    int i = 0; // 控制因子 (循环中作为下标) 从0开始
    while (i < sizeof(arr) / sizeof(arr[0])){
        cout << "while循环取出内容: ";
        cout << arr[i] << endl;
        i++;
    }
    cout << endl;

    // for
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
        cout << "for循环取出内容: ";
        cout << arr[j] << endl;
    }
    cout << endl;

    // for 高级循环
    for (int temporary_variables : arr) {
        cout << "高级for循环取出内容: ";
        cout << temporary_variables << endl;
    }
    return 0;
}