//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        
        //code
        int count[256]={0}; 
        int l=0; //i - starting index of window   
        int r=0;  //j - ending index of window
        int ans=0; //length of longest substring no repeating char
        
        while(r<S.length())     
        {
            count[S[r]]++;      
            
            while(count[S[r]]>1)   
            { 
                count[S[l]]--;   
                l++;         
            }
            
            ans = max(ans,r-l+1);   
            r++;   
        }    
        return ans;
        
	}
    
        
    
        
        
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends