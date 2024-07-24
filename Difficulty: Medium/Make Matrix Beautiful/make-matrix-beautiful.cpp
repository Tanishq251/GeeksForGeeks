//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here
         vector<int> rowSum(n, 0);
        vector<int> colSum(n, 0);
    
        // Calculate initial row and column sums
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                rowSum[i] += matrix[i][j];
                colSum[j] += matrix[i][j];
            }
        }
    
        // Find the maximum sum value of any row or column
        int maxSum = 0;
        for (int i = 0; i < n; ++i) {
            maxSum = max(maxSum, rowSum[i]);
            maxSum = max(maxSum, colSum[i]);
        }
    
        // Calculate the total number of operations required
        int operations = 0;
        for (int i = 0; i < n; ++i) {
            operations += maxSum - rowSum[i];
        }
    
        return operations;
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends