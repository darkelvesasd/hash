class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int>hash;
    vector<int>ret;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        hash.emplace(nums[i-1], i-1);
        if (hash.count(target-nums[i]))
        {
            ret.emplace_back(hash[target - nums[i]]);
            ret.emplace_back(i);
        }
    }
    return ret;
}
};
