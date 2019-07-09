#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool visit[200];

void dfs(vector<vector<int>>& arr, int num) {
    visit[num] = true;
    
    for(int i=0; i<arr.size(); i++) {
        if(i==num)
            continue;
        if(!visit[i] && arr[num][i]==1)
            dfs(arr, i);
    }
    
    return;
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; i++) {
        if(!visit[i]) {
            dfs(computers, i);
            answer++;
        }   
    }
    
    return answer;
}