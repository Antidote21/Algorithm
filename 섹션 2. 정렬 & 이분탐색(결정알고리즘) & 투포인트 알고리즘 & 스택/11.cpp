#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("input.txt", "rt", stdin);
	ios::sync_with_stdio(false);
	int n, m, ps, pt;
	cin>>n>>m;
	vector<int> dy(m+1);
	for(int i=0; i<n; i++){
		cin>>ps>>pt;
		for(int j=m; j>=pt; j--){
			dy[j]=max(dy[j], dy[j-pt]+ps);
		}			
	}
	cout<<dy[m]<<"\n";		
	return 0;
}
