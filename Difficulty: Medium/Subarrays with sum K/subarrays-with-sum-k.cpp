//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        unordered_map<int, int> prefixSumCount;
        int currentSum = 0;
        int subArrayCount = 0;
    
        prefixSumCount[0] = 1;
    
        for (int i = 0; i < N; i++) {
            currentSum += Arr[i];
    
            if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
                subArrayCount += prefixSumCount[currentSum - k];
            }
    
            prefixSumCount[currentSum]++;
        }
        return subArrayCount;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends