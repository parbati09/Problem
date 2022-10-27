//first and last occurance 

vector<int> find(int arr[], int n , int x )
{
    // code here
      int start=0,end=n-1;
        //int res=-1;
        vector<int> ans(2,-1);
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
               // res=mid;
                ans[0]=mid;
                end=mid-1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        //return res;
       // int ans=-1;
         start=0,end=n-1;
         while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==x)
            {
                //res=mid;
                ans[1]=mid;
                start=mid+1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
}