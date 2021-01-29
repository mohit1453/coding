 void moveZeroes(vector<int>& nums) {
        int i,j,res,t;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                res=i;
                for(j=i+1;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {
                        t=nums[j];
                        nums[j]=nums[res];
                        nums[res]=t;
                        break;
                    }
                }
            }
        }
        
    }
