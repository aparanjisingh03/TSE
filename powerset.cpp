#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<(1<<n);i++)
	{
		vector<int> ans;
		for(j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				ans.push_back(arr[j]);
			}
		}
		for(auto it:ans)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
	}
}