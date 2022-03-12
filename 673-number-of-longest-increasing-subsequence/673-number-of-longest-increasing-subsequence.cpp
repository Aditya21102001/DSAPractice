class Solution {
public:
    int findNumberOfLIS(vector<int> nums)
    {
      //Base Case
      if (nums.size() == 0)
        return 0;

      int n = nums.size();

      //Initialize dp_l array with
      // 1s
      vector<int> dp_l(n, 1);

      //Initialize dp_c array with
      // 1s
      vector<int> dp_c(n, 1);

      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < i; j++)
        {
          //If current element is
          // smaller
          if (nums[i] <= nums[j])
            continue;

          if  (dp_l[j] + 1 > dp_l[i])
          {
            dp_l[i] = dp_l[j] + 1;
            dp_c[i] = dp_c[j];
          }
          else if (dp_l[j] + 1 == dp_l[i])
            dp_c[i] += dp_c[j];
        }
      }

      //Store the maximum element
      // from dp_l
      int max_length = 0;

      for (int i : dp_l)
        max_length = max(i,max_length);

      //Stores the count of LIS
      int count = 0;

      //Traverse dp_l and dp_c
      // simultaneously
      for(int i = 0; i < n; i++)
      {
        //Update the count
        if (dp_l[i] == max_length)
          count += dp_c[i];
      }

      //Return the count of LIS
      return count;
    }
};