#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int l, int r, int x){
    if(l<=r){
         int mid = l + (r - l) / 2;
        if(a[mid]==x){
            return mid;
        }
         if(x>a[mid]){
         return binarySearch(a, mid+1, r, x);
         }else{
         return binarySearch(a, l, mid-1, x);
         }
    }
    return -1;
}


int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}