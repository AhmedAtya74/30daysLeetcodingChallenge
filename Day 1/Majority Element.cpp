class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        const int n = nums.size();
        int major_elm = 0;
        map<int, int>cnt;
        for(int i = 0 ; i < n ; i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]] > n / 2)
                major_elm = nums[i];
        }
        
        return major_elm;
    }
};
