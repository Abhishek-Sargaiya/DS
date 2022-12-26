    #include <iostream>
    using namespace std;
    int subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int sum=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
          sum+=arr[i];
          if (sum<s)
          {
            sum=0;
          }
          else if (sum>s)
          {
            sum=0;
          }
        }
        if (sum==s)
        {
            cout<<sum<<endl;
        }
        else
        cout<<"no subarray.";
    }
    int main()
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
      int ans;
      ans= subarraySum(arr , n , s);
      return 0;
    }