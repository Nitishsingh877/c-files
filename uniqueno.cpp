#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,4,5,3,2,1,7};
    int size = 10;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    int count =0;
     for(int i=0;i<size;i++)
     if(arr[i]>0){
count++;
     }
     cout<<count<<endl;
     
      return 0;
}