//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here
        string ans ="";
        stack<string> st;
        int n = s.size();
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i] != '.') temp+=s[i];
            else {st.push(temp); temp="";}
        }
        st.push(temp);
        
        while(st.size()>0){
            string curr = st.top();
            st.pop();
            ans+=curr;
            if(st.size()>0) ans+='.';
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends