class Solution {
public:
   /* void f(int freq[],vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                f(freq,nums,ans,ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)freq[i]=0;
        f(freq,nums,ans,ds);
        return ans;
    }*/
    void f(int index,vector<int>&nums,vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            f(index+1,nums,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>>ans;
        f(0,nums,ans);
        return ans;
    }
    
};