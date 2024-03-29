//인접행렬이 아닌 인접리스트를 쓰는 이유 

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;  
vector <int> map[20];
int ch[20], cnt=0, n;
void DFS(int v){
	int i;
	if(v==n){
		cnt++;
	}else{		
		for(i=0; i<map[v].size(); i++){
			if(ch[map[v][i]]==0){
				ch[map[v][i]]=1;
				DFS(map[v][i]);
				ch[map[v][i]]=0;
			}		
		}	
	}
}  
int main() {
	freopen("input.txt", "rt", stdin);
	int i, j, m, a, b;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d",&a, &b);
		map[a].push_back(b);
	}
	ch[1]=1;
	DFS(1);
	printf("%d\n",cnt);
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int  ch[30], cnt=0, n;
vector<int> map[30];
void DFS(int v){
	if(v==n){
		cnt++;
	}else{
		for(int i=0; i<map[v].size(); i++){
			if(ch[map[v][i]]==0){
				ch[map[v][i]]=1;
				DFS(map[v][i]);
				ch[map[v][i]]=0;
			}
		}
	}
}
int main(){
	freopen("input.txt", "rt", stdin);
	int m, a, b;
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		cin>>a>>b;
		map[a].push_back(b);
	};
	ch[1]=1;
	DFS(1);
	cout<<cnt;
	return 0;
}



