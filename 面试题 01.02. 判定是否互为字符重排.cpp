class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        int hash1[26]={0};
        int hash2[26]={0};
        for(auto a:s1)
        {
            hash1[a-'a']++;
        }
        int i=0;
        while(s2[i])
        {
            if(hash1[s2[i]-'a']>hash2[s2[i]-'a'])
            {
                hash1[s2[i]-'a']--;
            }
            else
            {
                return false;
            }
            i++;
        }
        for(auto a:hash1)
        {
            if(a)
            {
                return false;
            }
        }
        return true;
    }
};
