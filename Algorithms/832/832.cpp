//
// Created by uniuvel on 2018/8/11.
//

#include "832.h"

vector<vector<int>> Solution::flipAndInvertImage(vector<vector<int>>& A) {
    vector<vector<int>> B;
    for(int i = 0; i < A.size(); i++) {
        vector<int> tmp;
        for(int j = A[i].size() - 1; j >= 0; j--) {
            tmp.push_back(A[i][j]);
        }
        for(int j = 0; j < tmp.size(); j++) {
            tmp[j] = 1 - tmp[j];
        }
        B.push_back(tmp);
    }
    return B;
}
