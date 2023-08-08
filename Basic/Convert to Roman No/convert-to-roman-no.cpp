//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        string roman;
        vector<string>notations  = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int pos=0;n>0;++pos){
            while(n>=values[pos]){
                roman +=notations[pos];
                n = n-values[pos];
            }
        }
        return roman;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends