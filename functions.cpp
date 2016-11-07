//Program done by Rishabh "Gujju" Shah
#include <iostream>
using namespace std;


extern int largestOfThree(float, int, char);
extern int isString(char*, int);
extern void interleave(int, int, int, int, int, int);

int largestOfThree(float a, int b, char c)
{
	if((c-'0')<0 && (c-'0')>57)
		return -1;
	
	if(a==b||b==(c-'0')||a==(c-'0'))
	{
		if(a==b)
		{
			if((c-'0')>a)
				return 2;
			else 
				return 0;
		}
		else if(a==(c-'0'))
		{
			if(b>a)
				return 1;
			else
			return 0;
		}
		else if(b==(-'0'))
		{
			if(a>b)
				return 0;
			else
			return 1;
		}

		else 
		return -1;
	}

	else if(a>b)
	{
		if(b>(c-'0'))
		return 0;
		else if(a<(c-'0'))
		return 2;
	}

	else if(b>a)
	{
		if(b>(c-'0'))
		return 1;
		else 
		return 2; 
		
	}

	else if((c-'0')>a)
	{
		if(c-'0'>b)
		return 2;
		else
		return 1; 
	}
}


int isString(char *s, int maxSize)
{
	int size=0;
	for(int i=0; *(s+1)!='\0';i++)
	{
		size++;
	}

	if(size>=0 && size<=maxSize)
	{
		return size;
	}
	else
	{
		return -1;
	}
}

void interleave(int a[], int alen, int b[], int blen, int result[], int maxresultlen)
{
	bool lol = true,lel=true,kek=true;

	for (int i=0,j=0; i<=maxresultlen; j++)
	{
		if(lol==true && lel==true)
		{
			result[j]=a[i];
			if(i+1==alen)
				lel=false;
			lol=false;
		}

		else if(lol==false && kek==true)
		{
			result[j]=b[i];
			if(i+1==blen)
			{
				kek = false;
			}
			lol=true;
			i++;
		}

		else
		{
			if(i>=alen && i>=blen)
				break;
			else if(i>=alen)
			{
				result[j]=b[i];
				i++;
			}
			else if(i>=blen)
			{
				result[j]=a[i];
				i++;
			}
		}
	}

}


int main()
{/*	
	float a;
	int b;
	char c;

	cin>>a>>b>>c;
	largestOfThree(a,b,c);

	char *s;
	int maxSize;
	cin>>s>>maxSize;
	isString(s,maxSize);
	
	int alen; int blen; int maxresultlen;

	cin>>alen;
	int a[alen];
	for(int q=0;q<alen;q++)
		cin>>a[q];

	cin>>blen;
	int b[blen];
	for(int y=0;y<blen;y++)
		cin>>b[y];

	cin>>maxresultlen;
	int result[maxresultlen];

	interleave(a,alen,b,blen,result,maxresultlen);

	for(int u=0; u<maxresultlen;u++)
	{
		cout<<result[u]<<" "<<endl;
	}
*/	
}