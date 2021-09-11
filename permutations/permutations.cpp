class Solution {
public:
    
    int N;
    vector<vector<int>> ans;
    int vs[6];
    vector<int> _nums;
    
    
    void permute(int cnt, vector<int> cur){
        
        
        if(cnt == N){
            ans.push_back(cur);
            return;
        }
        for(int i = 0; i < N; i++){
            if(!vs[i]){
                vs[i] = 1;
                cur.push_back(_nums[i]);
                permute(cnt+1, cur);
                cur.pop_back();
                vs[i] = 0;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        N = nums.size();
        _nums = nums;
        
        permute(0, vector<int>());
        return ans;
    }
};