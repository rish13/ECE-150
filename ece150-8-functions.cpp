//Program done by Rishabh "Gujju" Shah
#include <iostream>
using namespace std;


extern int largestOfThree(float, int, char);
extern int isString(char*, int);
extern void interleave(int, int, int, int, int, int);

int largestOfThree(float a, int b, char c)
{
		
	if(a==b||b==c||a==c)
	{
		if(a==b)
		{
			if(c>a)
				return 2;
			else 
				return 0;
		}
		else if(a==c)
		{
			if(b>a)
				return 1;
			else
			return 0;
		}
		else if(b==c)
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
		if(b>c)
		return 0;
		else if(a<c)
		return 2;
	}

	else if(b>a)
	{
		if(b>c)
		return 1;
		else 
		return 2; 
		
	}

	else if(c>a)
	{
		if(c>b)
		return 2;
		else
		return 1; 
	}
}


int isString(char *s, int maxSize)
{
	int size=0;
	for(int i=0; *(s+i)!='\0';i++)
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
	int j=0,i=0;
	for(int k=0;k<maxresultlen;k++)
    { 
            if(k%2==0)
            {
              if(i<alen)
              {
                result[k]=a[i];
                i++;
            }
            else
            {
                if(j<blen)
                result[k]=b[j];
                j++;
            }
            continue;
            }
            else
            {
                if(j<blen)
                {
                    result[k]=b[j];
                    j++;
                }
                else
                {   if(i<alen)
                    {
                    result[k]=a[i];
                    i++;
                    
                }
            }
            }
        }
        
}


/*int main()
{
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

	cout<<"Enter"<<endl;
	cin>>alen;
	int a[alen];
	for(int q=0;q<alen;q++)
	{
		cout<<"now"<<endl;
		cin>>a[q];
	}

	cout<<"enter"<<endl;
	cin>>blen;
	int b[blen];
	for(int y=0;y<blen;y++)
	{
		cout<<"enternow"<<endl;
			cin>>b[y];
	}

	cout<<"enterrrrr"<<endl;
	cin>>maxresultlen;
	int result[maxresultlen];

	interleave(a,alen,b,blen,result,maxresultlen);

	for(int u=0; u<maxresultlen;u++)
	{
		cout<<result[u]<<" "<<;
	}
	return 0;

}*/