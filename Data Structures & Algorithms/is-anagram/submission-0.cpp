class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        array<int, 26> f{};
        for (char l : s) 
            f[l - 'a']++;
        
        for (char l : t) {
            f[l - 'a']--;
            if (f[l - 'a'] < 0)
                return false;
        }
        return true;
    }
};
