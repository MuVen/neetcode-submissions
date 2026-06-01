class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        for(auto s : strs){
            int sal[26] = {0};
            for(auto c : s)
                sal[c-'a']++;
            string shash;
            for(int i = 0; i < 26; i++){
                shash += to_string(sal[i])+",";
            }
            umap[shash].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto it : umap){
            ans.push_back(it.second);
        }
        return ans;
    }
};
