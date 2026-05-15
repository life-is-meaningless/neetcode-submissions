class Solution {
public:
    bool isAnagram(string s, string t) {
        // length check
        if (s.length() != t.length()){
            return false;
        }

        // same characters present in both strings check
        for (int i = 0; i < s.length(); i++){
            int found_index = t.find(s[i]);
            if (found_index < t.length()){
                t.erase(found_index, 1);
            } else{
                return false;
            }
        }

        return t.empty();
    }
};
