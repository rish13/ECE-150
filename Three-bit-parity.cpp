#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	char in[9];
	int binary[9]={0,0,0,0,0,0,0,0,0};
	cin>>in;
	int par[3];
	int j=0;
	while(in[j]==48||in[j]==49)
	{
		j++;
	}
	j=j-1;
	if(j<=7)
	{
		for(int i=0;i<=j;i++)
		{
			binary[j-i]=in[i]-48;
		}
		par[0]=binary[0]^(binary[3]^binary[6]);
		par[1]=binary[1]^(binary[4]^binary[7]);
		par[2]=binary[2]^(binary[5]^binary[8]);

		cout<<par[2]<<par[1]<<par[0];
		return 0;
	}
	
}