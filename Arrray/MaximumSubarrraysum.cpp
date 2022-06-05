#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long cursum=0;
    long long maxsum=0;    
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        if(cursum<arr[i]){
            cursum=arr[i];
        }
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}
