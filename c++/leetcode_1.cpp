class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int array_num = nums.size();
        int tmp;
        vector<int> res(2);
        for (int i = 0; i < array_num-1; i++)
        {
            for (int j = i+1; j < array_num;j++)
            {
                tmp = nums[i] + nums[j];
                if (tmp == target)
                {
                    res[0] = i;
                    res[1] = j;
                }    
                
            }
            
        }
        return res;
    }
};
