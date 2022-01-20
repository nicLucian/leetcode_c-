#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    unordered_set<int> result;
    unordered_set<int> num1_set(nums1.begin(), nums1.end());
    for (int num : nums2) {
        if (num1_set.find(num) != num1_set.end()) {
            result.insert(num);
        }
    }
    return {result.begin(), result.end()};
}
