#include "iostream"
using namespace std;

int main()
{
    /*  if(布尔值)
     * {
     *     ...
     * }
     * else
     * {
     *     ...
     * }
     */

    int love;
    cout << "小美你喜欢我吗? 喜欢扣1,不喜欢扣0" << endl;
    cin >> love;

    if(love)
    {
        cout << "我也喜欢你" << endl;
    }
    else
    {
        cout << "我也不喜欢你" << endl;
    }
    return 0;

}