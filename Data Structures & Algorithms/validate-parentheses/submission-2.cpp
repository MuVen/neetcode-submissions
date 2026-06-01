class Solution {
    stack<char> sta;
    unordered_map<char,char> umap{{')','('},{']','['},{'}','{'}};
public:
    bool isValid(string s) {
        int i = 0;
        while(i < s.length()){
            if(s[i]== '[' || s[i] == '(' || s[i] == '{'){
                sta.push(s[i]);
            }else{
              if(umap.find(s[i]) != umap.end()){
                    if(!sta.empty() && sta.top() == umap[s[i]])
                        sta.pop();
                    else
                        return false;
              }
            }
            i++;
        }

        return sta.size() == 0;
    }
};
