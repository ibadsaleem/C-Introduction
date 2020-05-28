#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string moviename;
	int tsold;
	float adultticket;
	float childticket;
	float gamount;
	float perdon;
	float amdon;
	float netsale;
	int ticketc;
	int ticketa;
	cout<<"Enter Movie Name: ";
	cin>>moviename;
	cout<<"Enter Adult Ticket Price: ";
	cin>>adultticket;
	cout<<"Enter Child Ticket Price: ";
	cin>>childticket;
	cout<<"Percentage of Gross Amount Donated: ";
	cin>>perdon;
	cout<<"No of Child Tickets sold: ";
	cin>>ticketc;
	cout<<"No of Adult Tickets sold: ";
	cin>>ticketa;
	gamount=(ticketa*adultticket)+(ticketc*childticket);
	tsold=ticketa+ticketc;
	amdon=gamount * perdon/100;
	netsale=gamount-amdon;
	system("cls");
	cout<<"Movie Name:		            "<<moviename<<endl;
	cout<<"Number Of Tickets Sold:    	    "<<tsold<<endl;
	cout<<"Gross Amount:			   $"<<fixed<<setprecision(2)<<gamount<<endl;
	cout<<"Percentage of Amount Donated: 	   "<<fixed<<setprecision(2)<<perdon<<"%"<<endl;
	cout<<"Amount Donated:	            	   $"<<fixed<<setprecision(2)<<amdon<<endl;
	cout<<"Net Sale:                    	   $"<<fixed<<setprecision(2)<<netsale<<endl;
	
}
