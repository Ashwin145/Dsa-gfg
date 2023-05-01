//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    map<char, int> hstr;
	    string res;
	    for(int i=0;i<str.size();i++){
	        if(hstr[str[i]] == 0){
	            hstr[str[i]]++; // change the value to 1
	            res += str[i]; // include in string
	        }
	    }
	return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends