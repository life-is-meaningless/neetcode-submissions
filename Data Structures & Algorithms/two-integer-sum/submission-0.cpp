class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map <int, int> compliments;

        for (int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if (compliments.find(comp) != compliments.end()){
                return {compliments[comp],i};
            }
            compliments.insert({nums[i], i});
        }

        return {};
    }
};
