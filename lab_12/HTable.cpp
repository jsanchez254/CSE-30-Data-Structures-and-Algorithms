#include <stddef.h>
#include <iostream>
#include <string>
#include "HTable.h"

//CONSTRUCTOR
HTable :: HTable ()
{
	max_size = 23;					//size of table
	numel = 0;					//will keep track of table size
	dt = new data [max_size];			//array that will store table values

	for(int i = 0 ; i < max_size; i++)		//initializes table
	{
		dt[i].key = -1;
		dt[i].value = "N/A";
	}

}

//ALTERNATIVE CONSTRUCTOR
HTable :: HTable (int t_size)				
{
	max_size = t_size;				//size of table
	numel = 0;					//will keep track of table size
	dt = new data [max_size];			//array that will store table values

	for(int i = 0 ; i < max_size ;i++)		//initializes table
	{
		dt[i].key = -1;
		dt[i].value = "N/A";
	}
}

//HASH
int HTable :: hash (int &k)
{
	return (k % max_size);				//returns index corresponding to hash
}

//REHASH
int HTable :: rehash (int &k)
{
	return (k+1) % max_size;			//returns index as a rehash
}

//ADD
int HTable :: add (data &d)
{
	if(numel == max_size)				//if numel reches the max sieze of table then return -1
	{
		return -1;
	}

	int hasho = hash(d.key);			//get index

	if(dt[hasho].key == -1)				//check where to insert new value in table
	{

		//assign value to table location corresponding the index
		numel++;
		dt[hasho].key = d.key;
		dt[hasho].value = d.value; 
		return 0;
	}
	else						//else rehash if space is not open in table
	{
		for(int i=0; i < dt[hasho].key ;i++)
		{
			if(dt[hasho].key != -1)
			{
				hasho = rehash(hasho); //rehash
				
			}
			
		}

		//assign value to table location corresponding the index
		numel++;				
		dt[hasho].key = d.key;			
		dt[hasho].value = d.value; 
		return 0;	
	}

}

//REMOVE
int HTable :: remove (data &d)
{
	if(numel = 0)			//when numel reaches 0 stop searching to remove
	{
		return -1;
	}	
	
	int hasho = hash(d.key);	//get hash

	if(dt[hasho].key == -1)
	{
		return 0;
		
	}
	else
	{
		//will check if value to be removed exists
		int check = hasho;
		while (dt[hasho].key != d.key && dt[hasho].value != d.value)
		{
			hasho = rehash (hasho);
			if(check == hasho)
			{
				return -1;	//if value doesn't exist return -1
			}
		}
		
		//if value exists, remove table value
		numel--;			
		dt[hasho].key = -1;
		dt[hasho].value = "N/A"; 
		return 0;	
	}
	
}

//PRINT
void HTable :: output ()
{
	int i;
	for(i=0; i< max_size ; i++)
	{
		cout<<i<<"-> "<<dt[i].key<<" "<<dt[i].value<<endl;	//go through each value in table and print them
	}
	cout<<"There are "<<i-1<<" data in the table."<<endl;		//print size of table
}

