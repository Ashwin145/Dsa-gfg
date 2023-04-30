//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    set<char>Set;
    int Max=0;
    int start = 0;
    int end=0;
    while(start<S.size()){
        auto it = Set.find(S[start]);
        if(it == Set.end()){
            if(start-end+1>Max)
               Max= start-end+1;
            Set.insert(S[start]);
            start++;
        }
        else{
            Set.erase(S[end]);
            end++;
        }
        
            
    }
    return Max;
    // your code here
}