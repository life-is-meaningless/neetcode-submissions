class Solution {
public:
    bool is_anagram(string first, string second){
        if (first.size() != second.size()) return false;

        // matching the characters using an array of size 26
        int arr[26] = {0};

        for (char el : first){
            arr[el - 'a']++;
        }

        for(char el : second){
            arr[el - 'a']--;
        }

        for(int el : arr){
            if (el != 0) return false;
        }

        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string> & strs) {
        vector <string> arr = strs;
        vector <vector <string>> ans;

        for (int i = 0; i < arr.size(); i++){
            vector <string> sublist = {arr[i]};
            for (int j = i+1; j < arr.size(); j++){
                if(is_anagram(arr[i], arr[j])){
                    sublist.push_back(arr[j]);
                    arr.erase(arr.begin() + j);
                    j--;
                }
            }
            ans.push_back(sublist);
        }

        return ans;
    }
};
