#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,2,1,0,1,0,2,1,1,0,0,1,0,1,2};
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
return 0;
}