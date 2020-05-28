#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
struct player{
	
	string name;
	int homeruns;
	int numhit;
};

int main()
{
	string sname;
	player p1[10];
	int i,cnt=1;
	for (i=1;i<=10;i++)
	{
		cout<<i<<") Enter Player Name: ";
		getline(cin.ignore(),p1[i].name);
		cout<<"Enter Number of Home Runs: ";
		cin>>p1[i].homeruns;
		cout<<"Enter Number of hits: ";
		cin>>p1[i].numhit;
		cout<<endl;
	}
	cout<<endl<<"Enter Player Name to find?";
	cin>>sname;
	cout<<endl;
	for (i=1;i<=10;i++)
	{
		if (sname!=p1[i].name)
		{
			cnt++;
			}	
			else
			{
				break;
			} 
	}
	
	cout<<"Menu\n1)Update Name\n2)Update Number of Hits\n3)Number of Homeruns";	
		char a;
		a=getch();
		if (a=='1')
		{
			cout<<endl<<"Enter Updated Name: ";
			cin>>p1[cnt].name;
		}
		else if (a=='2')
		{
			cout<<endl<<"Enter Updated Hits: ";
			cin>>p1[cnt].numhit;
		}
		else if (a=='3') 
		{
			cout<<endl<<"Enter Updated Homeruns: ";
			cin>>p1[cnt].homeruns;
		}
		else{
			cout<<"Wrong Menu Selected";
		}
		system("cls");
		cout<<"----------Updated Record----------"<<endl;
		for (i=1;i<=10;i++)
	{
		cout<<endl;
		cout<<i<<") Enter Player Name: "<<p1[i].name<<endl;
		cout<<"Enter Number of Home Runs: "<<p1[i].homeruns<<endl;
		cout<<"Enter Number of hits: "<<p1[i].numhit<<endl;
		cout<<endl;
	}
		return 0;
		
			
}
