//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
         int n = S.length() ;
        int i = 0;
        int j = S.length()-1 ;
        unordered_map<char,int> mp ;
        for(auto it : S){
            mp[it]++;
        }
        bool flag=true ;
        while( i <= j ){
            if( flag ){
                if( mp[S[i]]>1){
                  mp[S[i]]--;
                  S[i] = '0' ;
                  flag=false;
                  
                }
                i++;
            }
            else {
                if( mp[S[j]]>1) {
                    mp[S[j]]-- ;
                    S[j]='0' ;
                    flag = true ;
                }
                j--;
            }
        }
        string ans ;
        for(auto it : S ){
            if( it != '0' )
            ans+=it ;
        }
        if( flag )
        return ans;
        reverse(ans.begin(),ans.end()) ;
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends