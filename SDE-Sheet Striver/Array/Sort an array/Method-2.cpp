// ----------------Using Count Sort----------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 2, 1, 0, 1, 0, 2, 1, 1, 0, 0, 1, 0, 1, 2};
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            count0++;
        if (v[i] == 1)
            count1++;
        if (v[i] == 2)
            count2++;
    }
    for (int i = 0; i < count0; i++)
        cout << "0 ";
    for (int i = 0; i < count1; i++)
        cout << "1 ";
    for (int i = 0; i < count2; i++)
        cout << "2 ";

    return 0;
}