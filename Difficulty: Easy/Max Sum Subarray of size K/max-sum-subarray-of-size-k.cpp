//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here
        long long maxs = LONG_MIN;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (i >= k - 1)
            {
                maxs = max(maxs, sum);
                sum -= arr[i - k + 1];
            }
        }
        return maxs;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends