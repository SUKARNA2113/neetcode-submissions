class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        //since the array is sorted in non decreasing order we can use binary search
        int start = 0;
        int n = numbers.size();
        int end = n-1;
        vector<int>arr;

        while(start<=end)
        {
            if(numbers[start]+numbers[end]==target)
            {
            arr.push_back(start+1);
            arr.push_back(end+1);
            return arr;
            }
            

            else if(numbers[start]+numbers[end]>target){
                end--;
            }
            

            else{
                start++;
            }
            
        }

        return arr;
        
    }
};
