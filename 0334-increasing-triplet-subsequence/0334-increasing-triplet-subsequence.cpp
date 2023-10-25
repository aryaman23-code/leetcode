class Solution {
public:


    bool increasingTriplet(vector<int>& nums) {
        /*Initialize two vectors, mini and maxi, 
        with the same size as the nums vector*/

        vector<int> mini(nums.size(),INT_MAX); 
        vector<int> maxi(nums.size(),INT_MIN); 
        int mins=INT_MAX; 
        int maxs=INT_MIN;
        for(int i=0;i<nums.size();i++){
            //find the minimum element from the left 
            mins=min(mins,nums[i]); 
            mini[i]=mins;
        }
        for(int j=nums.size()-1;j>=0;j--){
            //find largest element to its right
            maxs=max(maxs,nums[j]); 
            maxi[j]=maxs;
        }

        for(int i=0;i< nums.size();i++){
            //condition placed here is if minimum number to its 
            //left and maximum to its right is not same as the      
            //current number then we can say we have a increasing triplet 
            if(nums[i]!=mini[i] && nums[i]!= maxi[i]){
                return true;
            }
        }
        return false;
    }
};