#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,i,j,dif,min=1000000;
		cin>>a;
		int b[a];
		
		for(i=0;i<a;i++)
			cin>>b[i];
		
		sort(b,b+a);
		
		for(int i=1;i<a-1;i++)
		{
			if(b[i]>b[i-1])
			{
				dif=b[i]-b[i-1];
			}
			else
			dif=b[i-1]-b[i];
			
			if(min>dif)
			min=dif;
		}
		cout<<min<<endl;
	}
	return 0;
}
