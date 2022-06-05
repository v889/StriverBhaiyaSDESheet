#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
	vector<vector<long long int>> ans(n);
	if(n==1){
		return {{1}};
	}
	ans[0]={1};
	ans[1]={1,1};
	if(n==2) return ans;
	
	for(int i=3;i<=n;i++){
		vector<long long int> row(i,1);
		for(int j=1;j<i-1;j++){
				row[j]=ans[i-2][j-1]+ans[i-2][j];
		}
		ans[i-1]=row;
	}
	return ans;
}

