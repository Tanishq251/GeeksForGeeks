//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string> graycode(int n)
    {
        //code here
        if(n==1) return {"0","1"};
        
        vector<string> arr = graycode(n-1);
        vector<string> ans;
        
        for(int i=0;i<arr.size();i++)
            ans.push_back("0"+arr[i]);
        
        for(int i=arr.size()-1;i>=0;i--)
            ans.push_back("1"+arr[i]);
        
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
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans= ob.graycode(n);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
            
        cout<<"\n";
    }
}




// } Driver Code Ends