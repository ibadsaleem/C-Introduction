#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	float weight;
	cout<<"Input The Weight (Kg) = ";
	cin>>weight;
	cout<<endl;
	cout<<"Weight In Pounds Are: "<<fixed<<setprecision(2)<<weight/2.2;
}

