class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
      
        int min=INT_MAX;
        int number=INT_MIN;
        for(int i=0;i<nums.size();i++){
          if(min>abs(nums[i]))
            {
                min=abs(nums[i]);
                number=nums[i];            
          }
            if(min==abs(nums[i]))
            {
              if(number<nums[i])
              {
                  number=nums[i];
              }
            }
        }
        
        
      return number;  
    }
    
};