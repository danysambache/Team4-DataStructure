/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Generate payment dates by number of installments. Using classes.				
				
	CREATION DATE:        31-05-21 	
	MODIFICATION DATE:    1-06-21*/

#include "Validate.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;

/**
 * @brief Control the payment date of your account
 * 
 * @param deadlines 
 */
void Validate::printDate(int deadlines){
	time_t nowtime = time(0);
	struct tm *timeinfo;
	int year, month ,day;
	const char * weekday[] = { "Sunday", "Monday",
                             "Tuesday", "Wednesday",
                             "Thrusday", "Friday", "Saturday"};
    const char * mont[] = { "January", "February",
                             "March", "April",
                             "May", "June", 
							 "July", "August",
							 "September", "October",
							 "November", "December"};
	do{
		cout<<"Enter year: "; fflush(stdout); cin>>year;
    }while(year<2000||year>2050);
    do{
    	cout<<"Enter month: "; fflush(stdout); cin>>month;
	}while(month<0||month>11);
	do{			 
		cout<<"Enter day: "; fflush(stdout); cin>>day; 
  	}while(day<1||day>31);
  	time ( &nowtime );
  	timeinfo = localtime ( &nowtime );
	for(int i=0;i<deadlines;i++){
  		timeinfo->tm_mday = day;  
  		timeinfo->tm_mon = month - 1;
  		timeinfo->tm_year = year - 1900;  
  		mktime ( timeinfo );
  		if(timeinfo->tm_wday==0){
  			timeinfo->tm_wday=timeinfo->tm_wday+1;
  			timeinfo->tm_mday=timeinfo->tm_mday+1;
		}
		if(timeinfo->tm_wday==6){
  			timeinfo->tm_wday=timeinfo->tm_wday-1;
  			timeinfo->tm_mday=timeinfo->tm_mday-1;
		}
		if(timeinfo->tm_mon==11){
  			year=year+1;
		}
		cout<<endl<<i+1<<". "<<weekday[timeinfo->tm_wday]<<", ";
		cout<<mont[timeinfo->tm_mon]<<" ";
		cout<<timeinfo->tm_mday<<", "<<year;
		if(timeinfo->tm_mon==1){
			day=day+29;		
		}
		if(timeinfo->tm_mon==1){
			day=day+28;	
		}else{
			if(timeinfo->tm_mon==3||timeinfo->tm_mon==5||timeinfo->tm_mon==8||timeinfo->tm_mon==10){
				day=day+30;
			}else{
				day=day+31;
			}
		}
  	}
}

/**
 * @brief Shows the day entered by console
 * 
 */
void Validate::controlDate(){
	time_t nowtime = time(0);
	struct tm *timeinfo;
	int year, month ,day;
	const char * weekday[] = { "Sunday", "Monday",
                             "Tuesday", "Wednesday",
                             "Thrusday", "Friday", "Saturday"};
    const char * mont[] = { "January", "February",
                             "March", "April",
                             "May", "June", 
							 "July", "August",
							 "September", "October",
							 "November", "December"};
	do{
		cout<<"Enter year: "; fflush(stdout); cin>>year;
    }while(year<2000||year>2050);
    do{
    	cout<<"Enter month: "; fflush(stdout); cin>>month;
	}while(month<0||month>12);
	do{		
		cout<<"Enter day: "; fflush(stdout); cin>>day;	  
  	}while(day<0||day>31);
  	time ( &nowtime );
  	timeinfo = localtime ( &nowtime );
  	timeinfo->tm_mday = day;  
  	timeinfo->tm_mon = month - 1;
  	timeinfo->tm_year = year - 1900;  
  	mktime ( timeinfo );
  	if(timeinfo->tm_wday==0){
  		timeinfo->tm_wday=timeinfo->tm_wday+1;
	}
	if(timeinfo->tm_wday==6){
  		timeinfo->tm_wday=timeinfo->tm_wday-1;
	}
	if(timeinfo->tm_mon==11){
  		year=year+1;
	}
	cout<<"The Payment date: "<<endl;
	cout<<weekday[timeinfo->tm_wday]<<" - "<<mont[timeinfo->tm_mon]<<" - "<<year<<endl;
}

/**
 * @brief Validate leap year
 * 
 * @param _year 
 * @return true 
 * @return false 
 */
bool Validate::controlBinary(int _year){
   return (_year % 4 == 0 && _year % 100 != 0 || _year % 400 == 0) ? true : false;
}

/**
 * @brief Construct a new Validate:: Validate object
 * 
 */
Validate::Validate(){
}

/**
 * @brief Destroy the Validate:: Validate object
 * 
 */
Validate::~Validate(){
}
