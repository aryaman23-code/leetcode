#include <vector>

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size(); // Get the size of the input vector.
        
        // Iterate through the vector to find a valid pair of indices.
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (j - i >= indexDifference && abs(nums[j] - nums[i]) >= valueDifference) {
                    return {i, j}; // Return the indices if a valid pair is found.
                }
            }
        }
        
        return {-1, -1}; // If no valid pair is found, return {-1, -1}.
    }
};
