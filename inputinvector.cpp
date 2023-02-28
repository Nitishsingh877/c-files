#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    for(int i = 0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    // cin>>v[i];

     for(int i = 0;i<5;i++)
    {
        cout<<v[i]<<" "<<endl;
    }
      return 0;
}