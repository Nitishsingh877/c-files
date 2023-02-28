#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    int n=5;
    int k =3;

    k = k%n;
    int ansarrary[5];
   int j=0;
    for(int i=n-k;i<n;i++){
        ansarrary[j++]=array[i];
    }
      for(int i=0;i<=k;i++){
        ansarrary[j++]=array[i];
      }
    for(int i=0;i<n;i++)

{
   cout<<ansarrary[i]<<" ";
}
cout<<endl;
      return 0;
}