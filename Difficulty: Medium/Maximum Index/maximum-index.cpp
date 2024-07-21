//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        if( n==0 ) return -1;
    
        vector<int> Lmin(n), Rmax(n);
        
        Lmin[0] = arr[0];
        for(int i=1; i<n ; i++){
            Lmin[i] = min(arr[i], Lmin[i-1]);
        }
        
        Rmax[n-1] = arr[n-1];
        for(int j=n-2; j>=0; j--){
            Rmax[j] = max(arr[j], Rmax[j+1]);
        }
        
        int i = 0, j =0, diff =-1;
        
        while(j<n && i<n){
            if(Lmin[i] <= Rmax[j]){
                diff = max(diff, j-i );
                j++;
            }
            else{
                i++;
            }
        }
        
        return diff;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends