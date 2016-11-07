#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	fstream fo,fo1;
	string a;
	int i,j;
	float pi=0,di=0;
	float average=0;
	float avg1=0;
	float avg2=0;
	int count=0;

	fo.open("ece150-proj1-input.txt",ios::in);
	fo1.open("ece150-proj1-output.txt",ios::out);
		while(fo>>a>>i>>j)
		{
			count++;
			average=i+average;
			di=di+i;
			if(j>=0 && j<=5)
				{
					avg1=j+avg1;
				}
			else
				{
					exit(0);
				}	
		pi=pi+j;
		}
	average=(average/count);

	cout<<average<<"\n";

	fo1<<"Average size="<<"\t"<<average<<"\n";
	avg1=(avg1/count);

	cout<<avg1<<"\n";
	fo1<<"Expected delay for priority="<<"\t"<<avg1<<"\n";
	di=((di*8)/10);

	avg2=((pi+di)/count);
	cout<<avg2;
	fo1<<"Expected total delay="<<"\t"<<avg2<<"\n";

	fo.close();
	fo1.close();
}

