class Solution {
public:
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int>hash;
    for (int i = 1; i < nums.size(); i++)
    {
        hash[nums[i - 1]] = i - 1;
        if (hash.count(nums[i]))
        {
            if (k >= i - hash[nums[i]])
            {
                return true;
            }
            hash[nums[i]] = i;
        }
    }
    return false;
}
};
