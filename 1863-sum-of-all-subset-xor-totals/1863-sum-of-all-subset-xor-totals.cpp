class Solution {
public:
      int sum=0;
    void f(int index,vector<int>&nums,int xorsum){
        
        if(index>=nums.size())
        {
            sum+=xorsum;
             return ;
        }
         
           
        
       // ds.push_back(nums[index]);
        
        f(index+1,nums,xorsum^nums[index]);
        
       // ds.pop_back();
        
        f(index+1,nums,xorsum);
        
    }
    int subsetXORSum(vector<int>& nums) {
        
     //   vector<int>ds;
      
        f(0,nums,0);
        return sum;    
    }
};