 int countOnes(int arr[], int N)
    {
      int low=0,high=N-1;
      while(low<=high)
      {
         int  mid=(low+high)/2;
          if(arr[mid]==0)
          high=mid-1;
          else
          if(mid==0||arr[mid]!=arr[mid+1])
          return mid+1;
          else
          low=mid+1;
      }
        
    }
