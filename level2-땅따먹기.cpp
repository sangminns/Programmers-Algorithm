#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b, int c) {
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}

int solution(vector<vector<int>> land)
{
    int answer = 0;
 
    for(int i=0; i<land.size()-1; i++) {
        
        land[i+1][0] += max(land[i][1],land[i][2],land[i][3]);
 
        land[i+1][1] += max(land[i][0],land[i][2],land[i][3]);
 
        land[i+1][2] += max(land[i][0],land[i][1],land[i][3]);
 
        land[i+1][3] += max(land[i][0],land[i][1],land[i][2]);
    
    }
    answer = land[land.size()-1][0];
    for(int i=1; i<land[0].size(); i++) {
        if(answer < land[land.size()-1][i])
            answer = land[land.size()-1][i];
    }

    return answer;
}