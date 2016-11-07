#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

using namespace std;

void restoreSorted(intListEntry * & head)
{
	/*
		BASE CASE = SOMETHING YOU NEED TO CHECK FOR THE VALIDITY OF "head"

		POINTERS ARE MEMEORY ADDRESSES

		-------------------                  -------------------
head ->	|	3	|	next = 8004|  ----->     |	5	|	next = NULL|  -----> 
		-------------------		     	      ------------------				
				4000							8004
		

		head = 4000

		How to get "3" : 

		head->i = 3

		head->next = 4004

		head = head->next

		head = 4004 ?

		-12 --> -11  --> -9  --> -2   --> 1  --> 2  --> 3 -->  4 --> -10

		-12 --> -11  --> -9  --> -2 --> 1  --> 2  --> 3 -->  4

		-12 --> -11 --> -10 --> -9 --> -2 --> 1 --> 2 --> 3 --> 4

		1) How do access the values in the list ? OR How to traverse a list ?
		2) How to compare ?
		3) How to swtich ?
		4) Which value is NOT in the right place
	
		intListEntry* ptr;       OR intListEntry * ptr = fakeHead->next;
		nextVal=head->next;
		
		intListEntry* fakeHead = head;

		if(fakeHead->next=NULL)
		{
			
		}
		while(fakeHead=NULL)
		{
			if(fakeHead->i < ptr->i && ptr->i > ptr->next->i)
			{
				fakeHead->next=ptr->next;
				break;
			}
			fakeHead=fakeHead->next;
			ptr=fakeHead->next;
		}

		fakeHead=head;
		intListEntry * ptr2 = fakeHead->next;

		while(fakeHead->next!=NULL) OR (fakeHead->next)
		{
			if(ptr->i > fakeHead->i && ptr->i < ptr2->i)
			{
				fakeHead->next=ptr;
				ptr->next=ptr2;
			}

			else
			{
				
			}
		}
		
	*/


	return;
}