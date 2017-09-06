#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct Time		//structure of time that will store time variables	

    {
    int hour;		//will store hours
    int minutes;	//will store minutes
    int seconds;	//will store seconds
    } end, start;	//objects that will be able to get the start and end time

bool getTimeFromUser(struct Time &time);	//will check if time format is valid

void print24H(struct Time start, struct Time end);	//will print out times


int main()
{

    cout<<"Enter the start time for the lecture (format is HH:MM:SS): ";
    if(getTimeFromUser(start))			//checks if starting time is correct

    {

        cout<<"Enter the end time for the lecture (format is HH:MM:SS): ";
        if(getTimeFromUser(end))		//checks if ending time is correct
        {
		print24H(start,end);		//calls function to print out times
        }

        else
        {
            cout<<"The end time is invalid!!"<<endl;	//if ending time is invalid print this
        }

    }

    else
    {
        cout<<"The start time is invalid"<<endl;	//if starting time is invalid print this
    }

}

//GET TIME FROM USER
bool getTimeFromUser(struct Time &time)
{
    string timer;					//string in which user's input will be stored
    getline(cin,timer);					//enables user to enter time
    
    
    if(timer.length() != 8 || timer.substr(2,1) != ":"||timer.substr(5,1) != ":")	//makes sure that format is correct and it includes ":" at certain positions
    {
    	return false;									//Invalid
    }
	
   
    else										//if this format is correct then assign user's values to struct values
    {
	//Converting parts of string to variables
    	time.seconds = atoi(timer.substr(6,2).c_str());
    	time.hour = atoi(timer.substr(0,2).c_str());
    	time.minutes = atoi(timer.substr(3,2).c_str());

    	if(time.seconds >= 0 && time.seconds <=59 && time.minutes >= 0			//checks if boundaries of time are correct
    	   && time.minutes <=59 && time.hour >=0 && time.hour <= 24)

    	{
    	     return true;								//Valid
    	}

  	else
   	{
       	    return false;								//invalid
   	}
   }

}
//PRINTS OUT TIME
void print24H(struct Time start, struct Time end)					
{
	cout << "The lecture starts at ";
	cout << setfill('0') << setw(2) << start.hour << ":";
	cout << setfill('0') << setw(2) << start.minutes << ":";
	cout << setfill('0') << setw(2) << start.seconds;
	cout << " and ends at ";
	cout << setfill('0') << setw(2) << end.hour << ":";
	cout << setfill('0') << setw(2) << end.minutes << ":";
	cout << setfill('0') << setw(2) << end.seconds<<endl;
}
