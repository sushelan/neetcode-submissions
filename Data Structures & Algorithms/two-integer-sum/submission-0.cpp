using namespace std;
#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.contains(nums[i])) {
                return {m.at(nums[i]), i};
            }
            else {
                m.insert({target - nums[i], i});
            }
        }
        // nums = [3,4,5,6]
        // i = 0
        // map[target - nums[i]] = i;
        // i = 1
        // if (nums[i] is in the map) return [map[i], i]

    }
};
