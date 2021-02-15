#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class order{
	private:
		int num;
		char opt;
		int quantity,price;
	public:
		void Place_order()
		{	int f;
			m: cout << "Enter Item number (one at a time): ";
			cin  >> num;
			cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
  			cin>>opt;
  			if(opt=='y' || opt=='Y')
 			{
  			goto m;
  			}
  			else
			{switch(num)
			{
				case 1:
				one:	cout << "\t\t\tWINGS SECTION\nFLAVOURS:1)Plain wings\n2) Smoky BBQ\n3) Honey mustard\n4)Buffalo wings\n5) Sweet thai chilli";
					cout << "\nEnter flavour number: ";int f;cin >> f;
				if (f>=1 && f<6)
				{
					cout << "Enter quantity: "; cin >> quantity;
					if (quantity==6 || quantity==12)
					{
						if (quantity==6)
						{
							price=299;
							price*=quantity;
						}
						if (quantity==12)
						{
							int b=549;
							price*=quantity;
						}system("cls");system("YELLOW");
						cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "Gourmet fries Flavour " << f << ":   RS " << price << endl;
						cout <<"\nThank you for coming\noooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"; 
					 } 
					}else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto one;}break;
					
				
				case 2:
				two:cout << "\t\t\tGOURMET FRIES\nFLAVOURS:\n1)Chilli Cheese Fries\n2)Wild Fries\n3)Zesty BBQ Fries\n4)Mayo Garlic Fries\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f>=1 && f<=4)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int bucket=259;
						price=bucket*quantity;
					system("cls");system("color YELLOW");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "Gourmet fries Flavour " << f << ":   RS " << price << endl;
						cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}
					else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto two;}break;
				
				case 3:
					three:cout << "\t\t\tPIZZA FRIES\nFLAVOURS:\n1)Tikka Feast\n2)Smoky Delight\n3)Fajita Fun\n4)Classic Chicken Pepperoni\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f>=1 && f<=4)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int bucket=359;
						price=bucket*quantity;
						system("cls");system("color YELLOW");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "Pizza fries Flavour " << f << ":   RS " << price << endl;
						cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}
			 		else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto three;}break;
				case 4:
					four:cout << "\t\t\tMUSCLE BURGERS\n\n1)Double patty\n2)Tripple Patty\n";
					cout << "Enter quantity: ";cin >> quantity;
					cout << "\nEnter 2 for double patty and 3 for tripple patty burger: ";cin >> f;
					if (f>=2 && f<=3)
					{
						if (f==2)
						{
							int a=549;
							price=a*quantity;
						}
						if (f==3)
						{
							int b=699;
							price=b*quantity;
						}
						cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "MUSCLE BURGER (" << f << ") :   RS " << price << endl;
						cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}
					else{
					system("cls");system("color YELLOW");cout << "We only provide items in standard quantity!enter again: \n";
					goto four;}break;
				case 5: 
					five: cout << "\t\t\tCLASSIC BURGER\nFLAVOURS:\n1)Beef Vegi\n2)Beef Cheese\n3)Chick n Crisp\n4)Grilled Chicken\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f>=1 && f<=4)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int price=359;
						price*=quantity;
					system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "CLASSIC BURGER Flavour " << f << ":   RS " << price << endl;
					cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}	
			 		else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto five;}break;
				case 6:
					six:cout << "\t\t\tEXTREME BURGER\nFLAVOURS:\n1)Jalapeno Spark\n2)Smoky Tang\n3)Chilli Blast\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f>=1 && f<=3)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int price=439;
						price*=quantity;
						system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "EXTREME BURGER Flavour " << f << ":   RS " << price << endl;
						cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}	
			 		else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto six;}break;
				case 7:
					seven:cout << "\t\t\tPREMIUM BURGER\nFLAVOURS:\n1)Jalapeno Spark\n2)Smoky Tang\n3)Chilli Blast\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f==1 || f==2 || f==3)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int price=559;
						price*=quantity;	
					system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "PREMIUM BURGER Flavour " << f << ":   RS " << price << endl;
					cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}
			 		else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto seven;}break;
					
				case 8:
					eight:cout << "\t\t\tSTUFFED BURGER\nFLAVOURS:\n1)Tripple cheese\n2)Jalapeno Pepper\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f==1 || f==2)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int price=449;
						price*=quantity;	
					system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "STUFFED BURGER Flavour " << f << ":   RS " << price << endl;
					cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}
			 		else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto eight;}break;
				case 9:
					nine:cout << "\t\t\tVALUED BURGER\nFLAVOURS:\n1)Chick n Crisp Value Burger\n2)Fire Bird Value Burger\n3)Smoky Tang Value Burger\n4)Jalapeno Spark Value Burger\n";
					cout << "\nEnter flavour number: ";cin >> f;
					if (f>1 && f<=4)
					{
						cout << "Enter quantity: ";cin >> quantity;
						int price=279;
						price*=quantity;	
					system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "VALUE BURGER Flavour " << f << ":   RS " << price << endl;
					cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
					}
			 		else{
					cout << "We only provide items in standard quantity!enter again: \n";
					goto nine;}break;
					case 10:
						ten:cout << "\t\t\tICE CREAM SHAKES\nFLAVOURS:\n1)Chocolate\n2)Strawbeerry\n3)Oreo Vanilla\n4)Bronnie Blackout\n5)Kitkat Shake\n";
						cout << "\nEnter flavour number: ";cin >> f;
						if (f>1 && f<=5)
						{
						cout << "Enter quantity: ";cin >> quantity;
						int price=329;
						price*=quantity;	
						system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "ICE CREAM SHAKE Flavour " << f << ":   RS " << price << endl;
						cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
						}
			 			else{
						cout << "We only provide items in standard quantity!enter again: \n";
						goto ten;}break;	
					case 11:
						p:cout << "\t\t\tMOCKTAILS\nFLAVOURS:\n1)Blue Lagoon\n2)Strawbeerry Mojito\n3)Mint Lemonade\n";
						cout << "\nEnter flavour number: ";cin >> f;
						if (f>1 && f<=3)
						{
						cout << "Enter quantity: ";cin >> quantity;
						int price=259;
						price*=quantity;	
						system("cls");cout << "\t\t\t\t\t\tORDER\n\n" << quantity << "MOCKTAIL Flavour " << f << ":   RS " << price << endl;
						cout <<"\nThankyou for coming\nnoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
						}
			 			else{
						cout << "We only provide items in standard quantity!enter again: \n";
						goto p;}break;
					default:
						cout << "Wrong option entered,	Try again!\n";
						goto m;
						break;
			 }
			 }}
};

