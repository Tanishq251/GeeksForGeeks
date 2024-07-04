//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int n, vector<int> &fruits) {
        int maxCount = 0, j = 0, basketCount = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            map[fruits[i]]++;
            if (map.size() <= 2)
            {
                maxCount = max(maxCount, i - j + 1);
            }
            else
            {
                while (map.size() > 2)
                {
                    map[fruits[j]]--;
                    if (map[fruits[j]] == 0)
                    {
                        map.erase(fruits[j]);
                    }
                    j++;
                }
                maxCount = max(maxCount, i - j + 1);
            }
        }
        return maxCount;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends