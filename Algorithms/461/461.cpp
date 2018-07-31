//
// Created by uniuvel on 7/31/18.
//

#include "461.h"

int Solution::hammingDistance(int x, int y) {
    int re = x ^ y;
    int count = 0;
    while(re) {
        if(re & 1) {
            count++;
        }
        re = re >> 1;
    }
    return count;
}