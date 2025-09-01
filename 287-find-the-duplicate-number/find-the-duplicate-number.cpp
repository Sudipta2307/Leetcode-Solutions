class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Method-1
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i+1] && i<nums.size()-1){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // //Method-2
        // while(nums[0]!=nums[nums[0]]){
        //     swap(nums[0],nums[nums[0]]);
        // }

        //Method-3
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            if(nums[index]<0){
                return index;
            }

            nums[index]*=-1;
        }
        return ans;
    }
};