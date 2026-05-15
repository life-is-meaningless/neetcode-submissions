class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> unique;

        for (int element : nums){
            if (unique.find(element) == unique.end()){
                unique.insert(element);
                continue;
            }else{
                return true;
            }
        }

        return false;
    }
};