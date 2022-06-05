#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int index=-1;
        for(int i=permutation.size()-1;i>0;i--){
        if(permutation[i]>permutation[i-1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(permutation.begin(),permutation.end());
    }
    else{
        int prev=index;
        for(int i=index;i<n;i++){
            if(permutation[i]>permutation[index-1] && permutation[i]<=permutation[prev]){
                prev=i;
            }
        }
        swap(permutation[index-1],permutation[prev]);
        reverse(permutation.begin()+index,permutation.end());
    }
    return permutation;
}
