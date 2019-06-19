#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    vector<int>::iterator iter;
    for (iter = arr.begin(); iter < arr.end(); iter++) { 
        answer += *iter; 
    }
    answer /= arr.size();
    return answer;
}