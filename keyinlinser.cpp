#include<iostream>
using namespace std;

int main() {
    int arr[] = { 12,34,56,78,90};
    int key = 90;
    int ans = -1;
    for(int i = 0;i<5;i++)
    {
        if(arr[i]==key)
        {
          ans = i;
          break;
        }
    }
    cout<<ans<<endl;

    return 0;
}