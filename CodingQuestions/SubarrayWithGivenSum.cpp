//This problem is more efficiently solved by window method.
//start adding numbers from array , if the sum is greater than given s then start subtracting from left side
//when sum is less than s , then start adding numbers from right side
//this method is called sliding window method.






#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        long long sum;
        int flag = 0;
        vector<int> ans;
        for(long long i = 0;i<n;i++){
            sum=0;
            
            for(long long j=i;j<n;j++){
                sum+=arr[j];
                if(sum>s){
                    break;
                }else if(sum==s){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    flag = 1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(!ans.size()){
            ans.push_back(-1);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends