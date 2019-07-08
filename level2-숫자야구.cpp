#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> baseball) {
    int answer = 0;
    int num = 0;
    bool flag;
    for(int i=1; i<=9; i++) {
        for(int j=1; j<=9; j++) {
            for(int k=1; k<=9; k++) {
                if(i==j || i==k || j==k)
                    continue;
                flag = true;
                for(int b=0; b<baseball.size(); b++) {
                    int strike = 0;
                    int ball = 0;
                    
                    if(i == baseball[b][0]/100) strike++;
                    else if(i == (baseball[b][0]/10)%10 || i == baseball[b][0]%10) ball++;
                    if(j == (baseball[b][0]/10)%10) strike++;
                    else if(j == baseball[b][0]/100 || j == baseball[b][0]%10) ball++;
                    if(k == baseball[b][0]%10) strike++;
                    else if(k == baseball[b][0]/100 || k == (baseball[b][0]/10)%10) ball++;
                    
                    if(strike==baseball[b][1] && ball==baseball[b][2]) {
                        flag = false;
                    } else {
                        flag = true;
                        break;
                    }
                }
                if(!flag) answer++;
            }
        }
    }    
    
    return answer;
}