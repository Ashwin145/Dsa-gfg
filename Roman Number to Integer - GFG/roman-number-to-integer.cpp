//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
int val(char c){
    if(c=='I')return 1;
    if(c=='V')return 5;
    if(c=='X')return 10;
    if(c=='L')return 50;
    if(c=='C')return 100;
    if(c=='D')return 500;
    if(c=='M')return 1000;
    else return -1;
    
}
class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int n=str.size(),ans=0;
        for(int i=0;i<n;i++){
            int s1=val(str[i]);
            if(i+1<n){
                int s2=val(str[i+1]);
                if(s1>=s2){
                    ans+=s1;
                }
                else{
                    ans+=(s2-s1);
                    i++;
                }
            }
            else{
                ans+=s1;
            }
        }
        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends