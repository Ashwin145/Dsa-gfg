//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int i=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    if(count==n){
        return -1;
    }
    while(arr[i]!=1&&i<n){
        i++;
        if(arr[i]==1){
            break;
        }
        
    }
    return i;
}