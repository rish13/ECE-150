#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(int numArgs, char* args[]){
    string temporary;
    
   
    int filesize; 
    filesize = atoi(args[1]);
    string firstname[filesize];
    string * firstname = new string [filesize];/
    string * lastname= new string [filesize];/
    for (int g=0; g<filesize; g++) {
        cin >> firstname[g];
        cin >> lastname[g];
        if (cin.fail()) {
            return -1;
        }
         }
    
    for (int g=0; g<filesize; g++) {
        for (int i=0; i< filesize; i++) {
            if (lastname[g]<lastname[i]) {
                temporary = lastname[g];
                lastname[g] =lastname[i];
                lastname[i] = temporary;
                temporary = firstname[g];
                firstname[g] =firstname[i];
                firstname[i] = temporary;
            }
            else if (lastname[i]==lastname[g]){
                
                        if (firstname[g]<firstname[i]) {
                            temporary = firstname[g];
                            firstname[g] =firstname[i];
                            firstname[i] = temporary;
                            temporary = lastname[g];
                            lastname[g] =lastname[i];
                            lastname[i] = temporary;
                 
            }
            }
        
        }
    }
  for (int g=0; g<filesize; g++) {
      cout << firstname[g]<<" ";
      cout << lastname[g] <<endl;
    }

    
    
    
    return 0;
}