  int removeDuplicates(vector<int>& nums) {
        int i,res=1;
        if(nums.size()!=0)
        {
        for(i=1;i<nums.size();i++)
        {
          if(nums[i]!=nums[res-1])
          {
              nums[res]=nums[i];
              res++;
          }
        }
        return res;
        }
        else
            return 0;
    
    }
        
