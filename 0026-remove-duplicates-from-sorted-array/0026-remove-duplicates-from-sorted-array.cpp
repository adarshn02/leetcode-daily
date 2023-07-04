class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size()==0)
            return 0;
        int s=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[s-1]){
                nums[s]=nums[i];
                s++;
            }
        }
        return s;
}
};