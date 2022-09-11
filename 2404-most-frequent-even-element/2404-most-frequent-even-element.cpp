class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int count=0;
        int ans=-1;
        for(auto it:m){
            if(it.first%2==0){
                if(it.second>count){
                    count=it.second;
                    ans=it.first;
                }
            }
        }
        return ans;
    }
};