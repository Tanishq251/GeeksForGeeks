//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m) {
        vector<int> ans;
    
        if (n == 0 || m == 0) {
            return ans;
        }
    
        // Traverse top row
        for (int j = 0; j < m; j++) {
            ans.push_back(matrix[0][j]);
        }
    
        // Traverse right column
        for (int i = 1; i < n - 1; i++) {
            ans.push_back(matrix[i][m - 1]);
        }
    
        // Traverse bottom row (if n > 1)
        if (n > 1) {
            for (int j = m - 1; j >= 0; j--) {
                ans.push_back(matrix[n - 1][j]);
            }
        }
    
        // Traverse left column (if m > 1)
        if (m > 1) {
            for (int i = n - 2; i > 0; i--) {
                ans.push_back(matrix[i][0]);
            }
        }
    
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends