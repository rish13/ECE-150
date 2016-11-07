#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
    double val;
	int b=0, c=0, d=0, e=0, f=0, g=0;
	int k,l,m,n,o,p;
	double a,w,x,y,z,v;

	cout << "Enter the coin denominations" << endl;
	cout<< "Enter number of coins of- "<<endl << "2$=  "; //We take all inputs of number of coins each
	cin >> k;
	cout<<"1$= ";
	cin >> l;
	cout<<"25c= ";
	cin >> m;
	cout<<"10c= ";
	cin >> n;
	cout<<"5c= ";
	cin >> o;
	cout<<"1c= ";
	cin >> p;
	
	cout<< "Insert value to be calculated for" << endl << "Value= ";
	cin>>val;
		
	double cur_val = 0.0;
	a= fmod(val,2);
	b= int ((val)/2);
	if (b <=k){
		cur_val+= b*2;
	}
	else 
	{
		a= a + (b-k)*2;
		b=k;
		cur_val+= b*2;
		
		
	}
	
	
	z=fmod(a,1);
	c=int ((a)/1);
	if (c<=l){
		a = a - c*1;
		cur_val+= c*1;
	}
	else 
	{
		a= fmod(a,1) + (c-l)*1;
		c=l;
		
		cur_val+= c*1;
	}

	y=fmod(a,0.25);
	d=int ((a)/0.25);
	if (d<=m){
		a = a - d*0.25;
		cur_val+= d*0.25;

	}
    else 
	{
		
		a= fmod(a,0.25) + (d-m)*0.25;
		d = m;
		cur_val+= d*0.25;
	}
	x=fmod(a,0.10);
	e=int ((a)/0.10);
	if (e<=n){
		a = a - e*0.10;
		cur_val+= e*0.10;
	}
	else 
	{
		
		a= fmod(a,0.10) + (e-n)*0.10;
		e = n;
		cur_val+= e*0.10;
	}
	w=fmod(a,0.05);
	f=int ((a)/0.05);
	if (f<=o){
		a = fmod(a,0.05) - f*0.5;
		cur_val+= f*0.05;
	}
	else 
	{
		f=o;
		a= fmod(a,0.05) + (f-o)*0.05;
		cur_val+= f*0.05;
	}
	
	v=fmod(a,0.01);
	g=int ((a)/0.01);
	
	if (g <=p && cur_val == val)
	{	   
       cout<< b<< " x $2, ";
       cout<< c<< " x $1, ";
       cout<< d<< " x 25c, ";
   	   cout<< e<< " x 10c, ";
       cout<< f<< " x 5c, ";
       cout<< g<< " x 1c." << endl;
	}
	else {
		cout << "Error: cannot make change.";
	
	}
	
	
	}
