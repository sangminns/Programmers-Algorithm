#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
   
    for(int i=0; i<skill_trees.size(); i++) {
        queue<char> q;
        int idx = 0;
        bool check = false;
        for(int j=0; j<skill_trees[i].size(); j++) {
            for(int k=0; k<skill.length(); k++) {
                if(skill_trees[i][j] == skill[k]) {
                    q.push(skill[k]);
                }
            }
        }
        while(!q.empty()) {
            if(skill[idx]==q.front()) {
                idx++;
                q.pop();    
            } else {
                check = true;
                break;
            }
            check = false;
        }
        if(!check) answer++;
    }
    
    return answer;
}