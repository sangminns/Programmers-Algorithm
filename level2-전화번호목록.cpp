#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    for(int i=0; i<phone_book.size(); i++) {
        for(int j=0; j<phone_book.size(); j++) {
            if(i==j) continue;
            if(phone_book[i].find(phone_book[j])==0) {
                answer = false;
                break;
            } else {
                answer = true;
            }
        }
        if(answer==false) {
            break;
        }
    }
    
    return answer;
}