#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        vector<int> dp(nums.size());
        dp[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        auto max_position = max_element(dp.begin(), dp.end());
        return *max_position;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "lis" << endl;
    cout << solution.lengthOfLIS(nums);
    return 0;
}
