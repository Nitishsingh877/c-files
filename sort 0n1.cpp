#include<iostream>
#include<vector>
using namespace std;

 void sortedoneandzeros(vector<int> &v)

    {
        int zeroscount = 0;

     for( int ele:v){
        if(ele==0){
            zeroscount++;
        }
     }
  for(int i=0;i<v.size;i++){
    if(i<zeroscount){
        v[i]=0;
    }
    else{
       v[i]=1;    
    }
  }
    }

int main()
{
    int n;
   cin>>n;

   vector<int> v;
   for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
   }

   sortedoneandzeros(v);

   for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
    cout<<endl;
   

    
      return 0;
}