/* 
    @description - THis is program is for basic implementation 

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element for searching";
    int search;
    cin>>search;
    int start = 0, end = n-1;
    int mid = -1, f= -1;
    while(start <= end){
        mid = start + (end - start)/2;
        if(a[mid]==search){
            cout<<mid+1<<endl;
            f=0;
            break;
        }
        if(a[mid]>search){
            end = mid -1;
        }else{
            start = mid+1;
        }
    }
    if(f == -1){
        cout<<"Element not found"<<endl;
    }
    return 0;
}