git remote add origin https://github.com/GApo407/CPP.Project.git
#include "iostream"
using namespace std;

int main()
// 每一维定对应一次循环
{
    int v1[2][3] = {{1,2,3},
                    {1,2,3}};

    for (int i = 0; i < sizeof(v1) / sizeof(v1[0]); ++i)
    {
       for (int j = 0; j < sizeof(v1[0]) / sizeof(v1[0][0]); ++j) {
            cout << v1[i][j] << endl;
        }
    }
    cout << endl;
    
    
    int v2[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    for (int i = 0; i < sizeof(v2)/ sizeof(v2[0]); ++i)
    {
        for (int j = 0; j < sizeof(v2[0]) / sizeof(v2[0][0]); ++j)
        {
            for (int k = 0; k < sizeof(v2[0][0]) / sizeof(v2[0][0][0]); ++k)
            {
                cout << v2[i][j][k] << endl;
            }
        }
    }


    return 0;
}