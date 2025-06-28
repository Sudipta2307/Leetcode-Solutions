class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int l=0;
        // int h=nums.size()-1;
        // int m=0;
        // while(m<=h){
        //     if(nums[m]==0){
        //         swap(nums[l],nums[m]);
        //         l++;
        //         m++;
        //     }
        //     else if(nums[m]==1){
        //         m++;
        //     }
        //     else{
        //         swap(nums[m],nums[h]);
        //         h--;
        //     }
        // }
        int n=nums.size();
        int z,o,t;
        z=o=t=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                z++;
            }
            else if(nums[i]==1){
                o++;
            }
            else{
                t++;
            }
        }
        int i=0;
        while(z--){
                nums[i]=0;
                i++;
        }
        while(o--){
                nums[i]=1;
                i++;
        }
        while(t--){
                nums[i]=2;
                i++;
        }
    }
};