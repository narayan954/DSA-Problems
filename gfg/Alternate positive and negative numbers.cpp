//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos,neg,ans;
	    int i=0;
	    for(i=0;i<n;i++){
	        arr[i]>=0 ? pos.push_back(arr[i]) : neg.push_back(arr[i]);
	    }
	    int p=0,ne=0;i=0;
	    while(i<n){
	        if(p!=pos.size()) arr[i++] = pos[p++];
	        if(ne!=neg.size()) arr[i++] = neg[ne++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
