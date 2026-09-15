class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        size_t n=arr.size();
        for(size_t i=n-1;i>=1;i--)
        {
            for(size_t j=0;j<i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        
    }
};