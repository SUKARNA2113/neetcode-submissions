class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> answer;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 2; i++)
        {
            // same fixed element ko skip karo
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int required = -nums[i];

            int start = i + 1;
            int end = n - 1;

            while(start < end)
            {
                if(nums[start] + nums[end] == required)
                {
                    answer.push_back({nums[i], nums[start], nums[end]});

                    // duplicate left values skip
                    while(start < end && nums[start] == nums[start + 1])
                        start++;

                    // duplicate right values skip
                    while(start < end && nums[end] == nums[end - 1])
                        end--;

                    start++;
                    end--;
                }

                else if(nums[start] + nums[end] > required)
                {
                    end--;
                }

                else
                {
                    start++;
                }
            }
        }

        return answer;
    }
};