#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    priority_queue<pair<int, int>> Room;
    for(int i=0; i<N; i++){
        int S,T;
        cin>>S>>T;
        Room.push({S,T});
    }
    int cnt=0;
    while(!Room.empty()){
        pair<int,int> top = Room.top();
        Room.pop();
        pair<int,int> top2 = Room.top();
        if(top.second>=top2.first){
            cnt++;
        }
    }
    cout<<cnt;
}

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, S, T;
    vector<pair<int, int>> st;
    priority_queue<int, vector<int>, greater<int>> Room;
    
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>S>>T;
        st.push_back({S,T});
    }
    
    sort(st.begin(), st.end());
    
    for(int i=0; i<st.size(); i++){
        Room.push(st[i].second);
        if(Room.top() <= st[i].first) Room.pop();
    }
    cout<<Room.size();
    return 0;
}
