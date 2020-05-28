#include <iostream>
#include <iomanip>
using namespace std;
struct menuItemType{
	string menuItem;
	double menuPrice;
	
};


int main()
{
	double amount;
	char c;
	int i=0;
	menuItemType menuList[8];
	cout<<"------------MENU------------\n\n1)Plain Egg		$1.45";
	cout<<"\n2)Bacon And Egg		$2.45\n3)Muffin		$0.99";
	cout<<"\n4)French Toast		$1.99\n5)Fruit Basket		$2.49";
	cout<<"\n6)Cereal		$0.69\n7)Coffee		$0.50\n8)Tea			$0.75";
	while (1)
	{
		cout<< "\nEnter choice OR Press E to exit: ";
		cin>>c;
		if (c<'1' || c>='9')
		{
		break;
		}		
		switch (c)
		{
			case '1':
				{
					menuList[i].menuItem="Plain Egg";
					menuList[i].menuPrice=1.45;
					break;
				}
			case '2':
				{
					menuList[i].menuItem="Bacon and Egg";
					menuList[i].menuPrice=2.45;
					break;
				}
			case '3':
				{
					menuList[i].menuItem="Muffin";
					menuList[i].menuPrice=0.99;	
					break;	
				}				
			case '4':
				{
					menuList[i].menuItem="French Toast";
					menuList[i].menuPrice=1.99;	
					break;	
				}				
			case '5':
				{
					menuList[i].menuItem="Fruit Basket";
					menuList[i].menuPrice=2.49;
					break;			
				}				
			case '6':
				{
					menuList[i].menuItem="Cereal";
					menuList[i].menuPrice=0.69;
					break;
				}
			case '7':
				{
					menuList[i].menuItem="Coffee";
					menuList[i].menuPrice=0.5;
					break;	
				}
			case '8':
				{
					menuList[i].menuItem="Tea";
					menuList[i].menuPrice=0.75;	
					break;	
				}	
				
	}
	i=i+1;	
		
		
}
	system("cls");
	cout<<endl<<"WELCOME TO ABC CAFE!\n"<<endl;

	int j;
	for (j=0;j<i;j++)
	{
		cout<<j+1<<")"<<menuList[j].menuItem<<"\t$"<<menuList[j].menuPrice<<endl;
		amount=amount+menuList[j].menuPrice;
	}
	
	cout<<"Tax		$"<<fixed<<setprecision(2)<<amount*0.05<<endl;
	cout<<"Amount Due	$"<<fixed<<setprecision(2)<<(amount+amount*0.05);
}

