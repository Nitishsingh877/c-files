#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	      int count = 0;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    if(n%2==0)
	    {
	          for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[i]=a[j]=-1;
            }
               }
    {
     for(int i=0;i<n;i++){
     if(a[i]>0){
        count++;
     }
     }
    
    {
       
             if(count==0)
             cout<<"yes"<<endl;
             else
             cout<<"no"<<endl;
         }
    }
	    }
        }
	    
	    else
	    cout<<"no"<<endl;
	    }
	
	
	return 0;
}
