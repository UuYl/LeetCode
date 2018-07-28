//
// Created by uniuvel on 2018/7/27.
//

#include "709.h"

string Solution::toLowerCase(string str) {
    for (char &i : str) {
        auto tmp = int(i);
        if(65 <= tmp && tmp <= 90) {
            i = char(tmp + 32);
        }
    }
    return str;
}
