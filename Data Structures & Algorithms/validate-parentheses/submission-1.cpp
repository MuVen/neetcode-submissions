class Solution {
    stack<char> sta;
public:
    bool isValid(string s) {
        int i = 0;
        while(i < s.length()){
            if(s[i]== '[' || s[i] == '(' || s[i] == '{'){
                sta.push(s[i]);
            }else{
                if(s[i] == ']'){
                    if(!sta.empty() && sta.top() == '[')
                        sta.pop();
                    else return false;
                }
                else if(s[i] == ')'){
                    if(!sta.empty() && sta.top() == '(')
                        sta.pop();
                    else return false;
                }
                else if(s[i] == '}'){
                    if(!sta.empty() && sta.top() == '{')
                        sta.pop();
                    else return false;
                }
            }
            i++;
        }

        return sta.size() == 0;
    }
};
