#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int i,j,min,max;
	cin>>i;
	cin>>j;

	if(i!=0&&j!=0)
	{
		cout<<i<<" "<<j<<endl;
		if(i<=j)
		{
			min=i;
			max=j;
		}
		else
		{
			max=i;
			min=j;
		}
	}
	min=i;
	max=j;

	while(i!=0&&j!=0)
	{
		cin>>i;
		if(i==0)
		break;
		cin>>j;
		if(j==0)
		{
			cout<<i<<" "<<min<<endl;
			if(i<min)
			{
				min=i;
			}
			else
			{
				cout<<i<<" "<<max<<endl;
				if(i>max)
				{
					max=i;
				}
			}
			break;
		}
		cout<<i<<" "<<j<<endl;
		if(i<=j)
	{
		cout<<i<<" "<<min<<endl;
		if(i<=min)
		{
			min=i;
		}
		cout<<j<<" "<<max<<endl;
		if(j>=max)
		{
			max=j;
		}
	}
	else
	{
		cout<<j<<" "<<min<<endl;
		if(j<=min)
		{
			min=j;
		}
		cout<<i<<" "<<max<<endl;
		if(i>=max)
		{
		max=i;
		}
	}
	}
}