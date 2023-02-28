#include<iostream>
using namespace std;


  int largestelementindex(int arr[],int size){
        int max=INT16_MIN;
        int maxindex=-1;
        for(int i=0;i<size;i++){
            if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
        }
        return maxindex;
    }
int main()
{
   int arr[]={2,3,4,5,6,7,7};
   int n = 7;
   int indexoflargest = largestelementindex(arr,n);
     cout<<arr[indexoflargest]<<endl;

    int largrstelement =  arr[indexoflargest];
    for(int i=0;i<n;i++){
        if(arr[i]==largrstelement){
            arr[i]=-1;
        }
    }
   arr[indexoflargest]=-1;
   int indexofsecondlargest =  largestelementindex(arr,5);
   
   cout<<arr[indexofsecondlargest]<<endl;
    

      return 0;
}