//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int max_sum = arr[0], max_curr = arr[0];
        int min_sum = arr[0], min_curr = arr[0];
        
        int total = arr[0];
        
        for(int i=1; i<num; i++){
            max_curr = max(arr[i], max_curr+arr[i]);
            max_sum = max(max_sum, max_curr);
            
            min_curr = min(arr[i], min_curr+arr[i]);
            min_sum = min(min_sum, min_curr);
            
            total+=arr[i];
        }
        
        if(total == min_sum) return max_sum;
        return max(max_sum, total-min_sum);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends