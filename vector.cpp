#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;


    v.push_back(1);
     cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;


    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;


    v.push_back(3);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl; 


    v.push_back(4);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;
    v.push_back(5);
     cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;

    v.resize(15);
     cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;

       v.pop_back();
       v.pop_back();
        cout<<"size: "<<v.size()<<endl;
    cout<<"capa: "<<v.capacity()<<endl;

    
          return 0;

}