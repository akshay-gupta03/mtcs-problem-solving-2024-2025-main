class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    vector<int> ans;
    unordered_map<int,int> map;
    int i=0;
    while(i<n) {
        diff=target-nums[i];
        if (map.find(diff)) {
            ans.push_back(map.find(target-nums[i]));
            ans.push_back(i);
            return ans;
        }
        map.put(nums[i], i);
        i++;
    }
    return ans;
    }
};