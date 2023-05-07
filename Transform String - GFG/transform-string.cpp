//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code hereint
        unordered_map< char,int>mp;
        int ans=0;
        for(int i=0;i<A.size();i++){
            mp[A[i]]++;
        }
        for(int i=0;i<B.size();i++){
            mp[B[i]]--;
        }
        for(auto it:mp){
            if(it.second!=0)
              return -1;
        }
        int i=A.size()-1,j=B.size()-1;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;j--;
      
                
            }
            
            else{
                
                
                ans++;
                i--;
            }    
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends