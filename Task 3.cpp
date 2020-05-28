#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string name;
	float marks[5];
	int i;
	float sum;
	cout<<"Enter Student Name: ";
	cin>>name;
	
	for (i=0;i<5;i++)
	{
		cout<<"Enter Test Marks "<<i+1<<": ";
		cin>>marks[i];
		sum=sum+marks[i];	
	}
	cout<<endl;
	
	cout<<"Student Name: "<<name<<endl;
	cout<<"Test Scores:";
	for (i=0;i<5;i++)
	{
		cout<<" "<<fixed<<setprecision(2)<<marks[i]<<"";
	}
	float avg=sum/5;
	cout<<endl<<"Average Score: "<<fixed<<setprecision(2)<<avg;
}
