#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
extern int Randi(int r);
extern float avg(float item[], int size);
extern float stdDev(float item[], float a, int size);
extern float median(float item[], int size);
extern float aad(float item[], float m, int size);


int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cerr << "Error";
		return -1;
	}
	
	bool isError=false;
	int random_number;
	float priority[1000], priorityf[1000];
	int counter=0;
	string check[1000];
	int bias = atoi(argv[1]);
	float size[1000], sizef[1000];
	string urif[1000], urii[1000];


	if (bias <0)
	{
		cerr << "Error";
		return -1;
	}	
	
	ifstream infile;

	infile.open("ece150-proj2-input.txt");
	//input all the data that is present in the infile

	int i=0; 
	while(infile>> urif[i] >> size[i] >> priority[i])
	 {
	 	i++;
	 }
	infile.close(); 
	//closes infile

	 
	 cin >> check[0];
	 
	 
	//sorts the data into URIs required by the user

	for(int j=0; check[j] != "exit" ; j++)
	{
		isError=false;
		
		for(int h=0; h<i; h++)
		
		{
			if(check[j]==urif[h])
				
				{
					sizef[counter]=size[h];

					priorityf[counter]=priority[h];

					counter++;

					isError=true;
				}
		}

		
		if (isError==false)

			{
				cerr << "error";
				return -1;
			}	

		cin >> check[j+1];
	}

	
	//printing calculations for size

	cout << avg(sizef, counter) << " " << median(sizef, counter) << " " << stdDev(sizef, avg(sizef, counter), counter) << " " <<aad(sizef, median(sizef, counter), counter) << endl;
	
	//printing calculations for priority

	cout << avg(priorityf, counter) << " " << median(priorityf,counter) << " " <<stdDev(priorityf, avg(priorityf, counter), counter)<< " " << aad(priorityf,median(priorityf, counter), counter) << endl;
	
	for (int p=0; p<counter; p++)
	{
			random_number= Randi(bias);
			
			if ((sizef[p]+random_number)<0)

			while((sizef[p]+random_number)<0)
			{
				random_number= Randi(bias);
			}
			
			sizef[p]=0.8*(sizef[p]+random_number);
	}

	cout << avg(sizef, counter) << " " <<median(sizef, counter) << " " <<stdDev(sizef, avg(sizef, counter), counter) << " " << aad(sizef, median(sizef, counter), counter) << endl;
	
	return 0;
}









