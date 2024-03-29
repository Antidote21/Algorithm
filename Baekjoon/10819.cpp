#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int main(){
    cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    int res = 0; 
    for(int i=0; i<n; i++){
        res += abs(A[i]-A[n-i-1]);
    }
    cout<<res;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int n[9];
int result;
vector<int> v;
int visit[9];
int cnt = 0;

void solve() { //브루트포스 
	if (v.size() == N) {
		int tmp = 0;
		for (int i = 0; i < N-1; i++) {
			tmp += abs(v[i + 1] - v[i]);
		}
		result = max(result, tmp);
		return;
	}
	for (int i = 1; i <= N; i++) { //백트래킹
		if (!visit[i]) {
			visit[i] = 1;
			v.push_back(n[i]);
			solve();
			v.pop_back();
			visit[i] = 0;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> n[i];
	}

	solve();
	cout << result << endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> A;
    int N;
    int sum;
    int res=0;
    
    cin>>N;
    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        A.push_back(num);
    }
    sort(A.begin(), A.end());
    
    while(next_permutation(A.begin(), A.end())){
        sum=0;
        for(int i=0; i<A.size()-1; i++){
            sum += abs(A[i] - A[i+1]);
        }
        res = max(res, sum);
    }
    cout<<res;
    return 0;
}
