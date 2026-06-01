class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        for(auto s : strs){
            vector<int> ch(26,0);
            for(auto c : s){
                ch[c-'a']++;
            }
            string str;
            for(int i = 0; i < 26; i++){
                str += to_string(ch[i])+",";
            }
            umap[str].push_back(s);
        }

        vector<vector<string>> res;
        for(auto it : umap){
            res.emplace_back(it.second);
        }
        return res;
    }
};
