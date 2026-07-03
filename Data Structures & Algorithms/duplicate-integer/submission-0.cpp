#include <vector>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            // Start checking from the element right after 'i'
            for (int j = i + 1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    return true; // Duplicate found!
                }
            }
        }
        return false; // No duplicates found
    }
};