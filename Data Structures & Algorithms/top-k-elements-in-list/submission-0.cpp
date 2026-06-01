class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(auto n : nums) umap[n]++;

        auto cmp = [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
        for(auto u : umap){
            pq.push({u.first, u.second});
            if(pq.size() > k) pq.pop();
        }


        vector<int> res;
        while(k--){
            res.push_back(pq.top().first);
            pq.pop();
        }

        return res;
    }
};
