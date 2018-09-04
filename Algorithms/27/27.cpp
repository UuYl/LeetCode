//
// Created by uniuvel on 2018/8/12.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == val) {
                while(nums.size() > i + 1 && nums.back() == val) {
                    nums.pop_back();
                }
                nums[i] = nums.back();
                nums.pop_back();
            }
        }
        return nums.size();
    }
};

int main() {
    Solution solution;
    int A[4] = {3, 2, 2, 3};
    vector<int> AA(A, A + 4);
    int B[1] = {1};
    vector<int> BB(B, B + 1);
    cout << solution.removeElement(BB, 1) << endl;
}
