#include <string>
#include <vector>

using namespace std;

// Binary Recursion
// 1. n-1개의 원판을 2번 기둥으로 빼고 가장 큰 원판을 3번 기둥으로 이동.
// 2. 2번 기둥의 n-1개 원판을 모두 3번 기둥으로 이동.
void hanoi(vector<vector<int>>& arr, int num, int a, int b, int c) {
    if(num > 0) {
        hanoi(arr, num-1, a, c, b);
        arr.push_back({a, c});
        hanoi(arr, num-1, b, a, c);
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(answer, n, 1, 2, 3);
    return answer;
}