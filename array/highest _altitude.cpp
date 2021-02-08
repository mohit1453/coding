int largestAltitude(vector<int>& gain) {
      
       int res=0,t=0,i;
        for(i=0;i<gain.size();i++)
        {
            t=t+gain[i];
            if(t>res)
            {
                res=t;
            }
        }
        return res;
        
    }
