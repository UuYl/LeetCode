//
// Created by uniuvel on 2018/8/12.
//

#include "657.h"

bool Solution::judgeCircle(string moves) {
    int horizontal = 0;
    int vertical = 0;
    for(char c : moves) {
        if(c == 'U') {
            vertical += 1;
        } else if(c == 'D') {
            vertical -= 1;
        } else if(c == 'R') {
            horizontal += 1;
        } else {
            horizontal -= 1;
        }
    }

    return horizontal == 0 && vertical == 0;
}
