#include <iostream>
#include <vector>

using namespace std;

int min(int a, int b, int c) {
    if(a<=b && a<=c) return a;
    else if(b<=a && b<=c) return b;
    else return c;
}

int solution(vector<vector<int>> board)
{
    int answer = board[0][0];

    for(int i=1; i<board.size(); i++) {
        for(int j=1; j<board[0].size(); j++) {
            if(board[i][j]>0) {
                board[i][j] = min(board[i][j-1], board[i-1][j], board[i-1][j-1]) + 1;   
            }
            if(board[i][j] >= answer) 
                answer = board[i][j];
        }
    }
    answer *= answer;

    return answer;
}