//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.io.*;

public class Main
{
    public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
		while(t-->0){
		    String inputLine[] = br.readLine().trim().split(" ");
		    int n = Integer.parseInt(inputLine[0]);
		    int m = Integer.parseInt(inputLine[1]);
		    long arr1[] = new long[n];
		    long arr2[] = new long[m];
		    inputLine = br.readLine().trim().split(" ");
		    for(int i=0; i<n; i++){
		        arr1[i] = Long.parseLong(inputLine[i]);
		    }
		    inputLine = br.readLine().trim().split(" ");
		    for(int i=0; i<m; i++){
		        arr2[i] = Long.parseLong(inputLine[i]);
		    }
		    Solution ob = new Solution();
		    ob.merge(arr1, arr2, n, m);
		    
		    StringBuffer str = new StringBuffer();
		    for(int i=0; i<n; i++){
		        str.append(arr1[i]+" ");
		    }
		    for(int i=0; i<m; i++){
		        str.append(arr2[i]+" ");
		    }
		    System.out.println(str);
		}
	}
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    //Function to merge the arrays.
    public static void merge(long arr1[], long arr2[], int n, int m) 
    {
        // Create a new array to store the merged result
        long[] result = new long[n + m];
        // code here 
        int i = 0;
        int j = 0;
        int k = 0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                result[k] = arr1[i];
                i++;k++;
            }else{
                result[k] = arr2[j];
                j++;k++;
                
            }
        }
         // Copy remaining elements of arr1, if any
        while (i < n) {
            result[k] = arr1[i];
            i++;
            k++;
        }
        
        // Copy remaining elements of arr2, if any
        while (j < m) {
            result[k] = arr2[j];
            j++;
            k++;
        }
        
        // Copy merged elements back to arr1 and arr2
        for (i = 0; i < n; i++) {
            arr1[i] = result[i];
        }
        for (j = 0; j < m; j++) {
            arr2[j] = result[n + j];
        }
    }
}
