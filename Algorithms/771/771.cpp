//
// Created by uniuvel on 2018/7/27.
//

#include "771.h"

int Solution::numJewelsInStones(string J, string S) {
    int count = 0;
    for(char Sc: S) {
        for(char Jc: J) {
            if(Sc == Jc) {
                count++;
            }
        }
    }
    return count;
}

int Solution::numJewelsInStonesHashMap(string J, string S) {
    int count = 0;
    unordered_map<char, int> stones;
    for(char c: S) {
        stones[c]++;
    }
    for(char c: J) {
        count += stones[c];
    }
    return count;
}

