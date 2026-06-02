class Solution {
    unordered_map<int,int> umap;
    vector<int> res;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(auto n : nums) umap[n]++;

        auto cmp = [](pair<int,int>& a, pair<int,int>& b){
            return a.second < b.second;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
        for(auto u : umap){
            pq.push({u.first, u.second});
        }

        while(k--){
            auto p = pq.top();pq.pop();
            res.push_back(p.first);
        }

        return res;
    }
};
