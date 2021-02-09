double findMaxAverage(vector<int>& nums, int k) {
     double curr_sum=0,i;
        for(i=0;i<k;i++)
        {
            curr_sum+=nums[i];
        }
        double max_sum=curr_sum;
        for(i=k;i<nums.size();i++)
        {
            curr_sum+=(nums[i]-nums[i-k]);
            max_sum=max(curr_sum,max_sum);
        }
        double t=max_sum/k;
        return t;
    }
