//
// Created by uniuvel on 2018/8/11.
//

#include "832.h"

int main() {
    Solution solution;
    vector<vector<int>> A;
    int a1[3] = {1, 1, 0};
    int a2[3] = {1, 0, 1};
    int a3[3] = {0, 0, 0};
    vector<int> A1(a1, a1 + 3);
    vector<int> A2(a2, a2 + 3);
    vector<int> A3(a3, a3 + 3);
    A.push_back(A1);
    A.push_back(A2);
    A.push_back(A3);
    vector<vector<int>> B;
    B = solution.flipAndInvertImage(A);
    for(int i = 0; i < B.size(); i++) {
        for(int j = 0; j < B[i].size(); j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}
