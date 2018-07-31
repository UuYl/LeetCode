//
// Created by uniuvel on 2018/7/28.
//

#include "804.h"

int Solution::uniqueMorseRepresentations(vector<string> &words) {
    string transformation[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.",\
                                 "---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_map<string, int> encodings;
    for(const string &word : words) {
        string tmp;
        for(char c : word) {
            tmp += transformation[c - 97];
        }
        encodings[tmp]++;
    }
    return encodings.size();
}
