#include<iostream>
using namespace std;

int main() {
    int arr[] = {12,34,56,78,90,98,76};
    int max = arr[0];
    for(int i = 0; i<7;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<max<<endl;

    return 0;
}