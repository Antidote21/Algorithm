#include <vector>

using namespace std;

int ch[200];

void dfs(int current, int n, vector< vector<int> > computers){
    ch[current] = 1;
    
    for(int i=0; i<n; i++){
        if(ch[i]==0 && computers[current][i] == 1){
            dfs(i, n, computers);
        }
    }
}

int solution(int n,  vector< vector<int> > computers){
    int answer = 0;
    
    for(int i=0; i<n; i++){
        if(ch[i]==0){
            dfs(i, n, computers);
            
            answer++;
        }
    }
    return answer;
}


#include <string>
#include <vector>

using namespace std;

int ch[200];

void dfs(vector<vector<int>> computers, int node){
    ch[node] = 1;
    for(int i=0; i<computers.size(); i++){
        if(ch[i]!=1&&computers[node][i]==1){
            dfs(computers, i);
        }       
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; i++){
        if(ch[i]!=1){
            dfs(computers, i);
            answer++;
        }
    }
    return answer;
}

#include <string>
#include <vector>
#include <queue>

using namespace std;

int ch[200];

void bfs(vector<vector<int>> computers, int node){
    queue<int> q;
    q.push(node);
    ch[node] = 1;
    
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        
        for(int i=0; i<computers.size(); i++){
            if(ch[i] != 1 && computers[curr][i] == 1){
                q.push(i);
                ch[i] = 1;
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; i++){
        if(ch[i]!=1){
            bfs(computers, i);
            answer++;
        }
    }
    return answer;
}

