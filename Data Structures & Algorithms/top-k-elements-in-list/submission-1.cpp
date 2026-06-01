class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(auto n : nums)
            umap[n]++;
        

        auto cmp = [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second < b.second;
        };

        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);//max heap
        for(auto u : umap){
            pq.push({u.first, u.second});
        }

        vector<int> ans;
        while(k--){
            auto [a,b] = pq.top();pq.pop();
            ans.push_back(a);
        }

        return ans;
    }
};
