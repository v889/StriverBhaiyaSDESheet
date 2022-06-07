#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int temp[n + 1] = {
    0
  };

     

       int repeat=0;

       int mis=0;

       for(auto i:arr){

           temp[i]+=1;

       }

       for(int i=1;i<=n;i++){

           int j = temp[i];

           if(j==0){

               mis=i;

           }

           if(j==2) repeat=i;

       }

       

       return {mis,repeat};

}
    
	


