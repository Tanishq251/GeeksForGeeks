//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void rec(int N, vector<int>&ans)
    {
        if(N<=0)
        {
             ans.push_back(N);
             return;
        }
        
        ans.push_back(N);
        
        rec(N-5,ans);
        
        ans.push_back(N);
    }
    vector<int> pattern(int N)
    {
         vector<int>ans;
         
         rec(N,ans);
         
         return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends