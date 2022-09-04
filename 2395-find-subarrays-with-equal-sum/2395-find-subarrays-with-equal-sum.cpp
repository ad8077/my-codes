class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int> ans;
        
        
    
        for (int i=1;i<nums.size();i++)
        {
            ans.insert(nums[i-1]+nums[i]);
        
        
       
        }
         if(ans.size()==(nums.size()-1)){
             return false;
         }
             return true;
          
    }
};