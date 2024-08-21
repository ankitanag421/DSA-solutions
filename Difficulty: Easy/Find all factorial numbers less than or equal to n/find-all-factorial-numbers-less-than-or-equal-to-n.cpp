//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long f=1;
  vector<long long>ans;
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
       for(int i=1;i<=n;i++){
           f=f*i;
           if(f<=n)
           ans.push_back(f);
           else
           break;
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends