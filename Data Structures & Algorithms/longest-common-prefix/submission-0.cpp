class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> mpq;
        for(int i = 0; i < strs.size(); i++){
            mpq.push({strs[i].size(), i});
        }

        auto [len,index] = mpq.top();
        int i, j;
        for(i = 0; i < len; i++){
            char ch = strs[0][i];
            for(j = 1; j < strs.size(); j++){
                if(strs[j][i] != ch) break;
            }
            if(j < strs.size()) break;
        }

        return strs[0].substr(0, i);
    }
};