//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        vector<int>temp;
        int element;
        int low=0;
        int left=0;
        int right=0;
        int mid=arr1.size();
        int high=arr2.size();
        int n=mid+high;
        while(left<mid && right<high){
            if(arr1[left]<=arr2[right]){
                temp.push_back(arr1[left]);
                left++;
            }
            else{
                temp.push_back(arr2[right]);
                right++;
            }
        }
        while(left<mid){
            temp.push_back(arr1[left]);
            left++;
        }
        while(right<high){
            temp.push_back(arr2[right]);
            right++;
        }
      for(int i=0;i<n;i++){
          if(i==(k-1)){
              element=temp[i];
              break;
          }
      }
      return element;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends