#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	int x[]={0};
	int h=0;

		cout<< "Enter numbers"<<endl;
		getline(cin,a,'0');

		for(int i=0; i<a.length(); i+=2)
		{
			x[h]=a[i]-'0';
			h++;

		}

		for(int j=0;j<sizeof(x);j++)
		{
			if(x[j]>x[j+1])
			{
				cout<<"Sorted non-decreasing"<<endl;
				
			}
		for(int t=0; t<sizeof(x);t++)
			if(x[j]<x[j+1])
			{
				cout<<"Sorted non-increasing"<<endl;
				
			}
			else
				{
					cout<<"Not sorted"<<endl;
					
				}


		}
		
		
	
	return 0;
}