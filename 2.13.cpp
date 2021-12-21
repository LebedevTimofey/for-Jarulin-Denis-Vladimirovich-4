#include <iostream>
using namespace std;
int main()
{
    int n, k1, s,z,i;
    cin >> n;
    cin >> z;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i%z==0)
        {
            k1 = -i;
            s = s + i;
        }
        if (i % 2 == 0 && i % z == 0)
        {
            k1 = i;
            s = s + i;
        }
    }
    cout << s;
}
