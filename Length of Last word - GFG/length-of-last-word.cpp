//{ Driver Code Starts
//Initial Template for C++

// CPP program for implementation of efficient 
// approach to find length of last word 
#include <bits/stdc++.h> 
using namespace std; 

int findLength(string s);

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	t+=1;
	bool flag = false;
	while(t--){
	    string s;
	    getline(cin,s);
	    if(!flag){
	        flag = true;
	        continue;
	    }
	    cout<<findLength(s)<<endl;
	}
	return 0;
} 

// } Driver Code Ends


//User function Template for C++

int findLength(string s){
    string ans="";
    for(int i=s.size()-1;i>=0;i--){
        if(ans.size()!=0 && s[i]==' ')return ans.size();
        else if(ans.size()==0 && s[i]==' ') continue;
        else{
            ans.push_back(s[i]);
        }
    }
    return ans.size();
    
}