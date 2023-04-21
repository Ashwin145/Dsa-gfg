//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    // https://practice.geeksforgeeks.org/problems/majority-element/0



// Function to find majority element in the array
int majorityElement(int arr[], int n)
{
    int count=1; int res=0;
    for(int i=1; i<n; i++){
        if(arr[res] == arr[i])
            count++;
        else
            count--;
            
        if(count==0){
            count=1;
            res=i;
        }
    }
    
    //2nd   res 
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
            count++;
    }
    
    if(count <= (n/2))
        return -1;
    else
        return arr[res];
}


};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends