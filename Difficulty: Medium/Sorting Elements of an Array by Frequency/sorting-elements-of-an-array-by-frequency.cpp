//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int , int> fp;
        
        for(int i=0; i<n; i++){
            fp[arr[i]]++;
        }
        
        vector<vector<int>> buckets(n+1);
        
        for(const auto& entry: fp){
            int f = entry.second;
            int val = entry.first;
            buckets[f].push_back(val);
        }
        
        vector<int> ans;
        
        for(int i=n; i>0 ;i--){
            if(!buckets[i].empty()){
                sort(buckets[i].begin(), buckets[i].end());
                
                for(int value : buckets[i]){
                    ans.insert(ans.end(), i, value);
                }
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends