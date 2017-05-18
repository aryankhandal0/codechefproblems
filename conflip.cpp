#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g;
		cin>>g;
		while(g--)
		{
			int i,n,q;
			int head=0,tail=0;
			cin>>i>>n>>q;
			int m,j;
			if(i==1)
			{
			
			long long int a[100000001]={0};
		
			for(m=0;m<n;m++)
			{
				for(j=0;j<=m;j++)
				{
				
				if(a[j]==1)
				a[j]=0;
				else
				if(a[j]==0)
				a[j]=1;
				}	
			}
			
			for(m=0;m<n;m++)
			{
				if(a[m]==0)
				head++;
				else
				if(a[m]==1)
				tail++;
			}
			if(q==1)
			cout<<head<<endl;
			else
			if(q==2)
			cout<<tail<<endl;
		}
		else
		if(i==2)
		{
			long long int a[100000001]={1};
		
			for(m=0;m<n;m++)
			{
				for(j=0;j<=m;j++)
				{
				
					
				if(a[j]==1)
				a[j]=0;
				else
				if(a[j]==0)
				a[j]=1;
				}
			}
			
			for(m=0;m<n;m++)
			{
				if(a[m]==0)
				head++;
				else
				if(a[m]==1)
				tail++;
			}
			if(q==1)
			cout<<head<<endl;
			else
			if(q==2)
			cout<<tail<<endl;
		}
		}
	}
	return 0;
}
