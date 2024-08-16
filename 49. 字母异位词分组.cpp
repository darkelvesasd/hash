class Solution {
public:
 vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map <string, vector<string>>hash;
    vector<vector<string>> ret;
    int n = strs.size();
    for (int i = 0; i < n; i++)
    {
        string t = strs[i];
        sort(strs[i].begin(), strs[i]. end());
        hash[strs[i]].emplace_back(t);
    }
    for (auto a : hash)
    {
         ret.emplace_back(a.second);
    }
    return ret;
}
};
