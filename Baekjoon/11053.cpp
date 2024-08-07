#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> dp(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, dp[i]);
    }
    
    cout << res;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    vector<int> dp(n, 1);
  
    int res=0;
    for(int i=0; i<n; i++){
        cin>>A[i];

    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(A[j]<A[i]){
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
    }
    res = *max_element(dp.begin(), dp.end());
    
    cout<<res;
}
