class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        
        size_t n=arr.size();
        
        for(size_t i=0;i<n;i++)
        {
             size_t min_pos=i;
            for(size_t j=i;j<=n-1;j++)
            {
                if(arr[j]<arr[min_pos])
                    min_pos=j;
            }
            size_t temp=arr[i];
            arr[i]=arr[min_pos];
            arr[min_pos]=temp;
        }
    }
};