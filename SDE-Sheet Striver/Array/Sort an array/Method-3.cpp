//-------------DUTCH NATIONAL FLAG ALGORITHM----------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 2, 1, 0, 1, 0, 2, 1, 1, 0, 0, 1, 0, 1, 2};
    int start = 0, mid = 0, end = v.size() - 1;
    while (mid <= end)
    {
        if (v[mid] == 0)
        {
            swap(v[start], v[mid]);
            start++;
            mid++;
        }
        else if (v[mid] == 2)
        {
            swap(v[mid], v[end]);
            end--;
        }
        else
            mid++;
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}