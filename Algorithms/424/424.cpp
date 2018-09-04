//
// Created by uniuvel on 2018/8/13.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int next_position = 0;
        int max_length = 0;
        while(next_position < s.size()) {
            char c = s[next_position];
            int k_tmp = k;
            int max_length_tmp = 1;
            for(int i = next_position + 1; i < s.size(); i++) {
                if(s[i] != c) {
                    --k_tmp;
                }
                if(k_tmp < 0) {
                    break;
                }
                max_length_tmp++;
            }
            if(k_tmp > 0) {
                max_length_tmp += k_tmp;
                if(max_length_tmp > s.size()) {
                    max_length_tmp = s.size();
                }
            }
            if(max_length_tmp >max_length) {
                max_length = max_length_tmp;
            }
            next_position = this->getNextPosition(s, next_position);
        }
        return max_length;
    }

    int getNextPosition(string s, int begin) {
        int next_position = s.size();
        char c = s[begin];
        for(int i = begin + 1; i < s.size(); i++) {
            if(s[i] != c) {
                next_position = i;
                break;
            }
        }
        return next_position;
    }
};

int main() {
    Solution solution;
    cout << solution.characterReplacement("AABABBA", 1) << endl;
}
