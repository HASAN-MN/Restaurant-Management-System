#include <iostream>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <order.h>
#include <admin.h>
using namespace std;
void DISPLAYMENU(){
 	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOODIES =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] WINGS (Rs 299/549)\t\t\t\t[2] GOURMET FRIES(Rs 259/-)\t\t\t\t[3] PIZZA FRIES (Rs 359/-)\n\t[4] MUSCLE BURGER (Rs 549/699)\t\t\t[5] CLASSIC BURGER (Rs 359/-)\t\t\t\t[6] EXTREME BURGERS (Rs 439/-)\n\t[7] PREMIUM BURGERS (Rs 559/719)\t\t[8] STUFFED BURGERS (Rs 499/-)\t\t\t\t[9] VALUE BURGERS (Rs 279/-)\n\t[10] ICE CREAM SHAKES (Rs 329/-)\t\t[11] MOCKTAILS (Rs 259/-)\t\t\t\t[12] COLD DRINKS (Rs 79/-)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
 cout<<"\n\t======================================================================================================================================="<<endl;
 }
class Resturant:public order,public admin{
	char ch;
	public:
		order customer;
		admin H;
		employee e;
	int choice()
	{
		
		int choice,p;
	cout << "\n\nEnter your choice: ";
	cin >> choice;
	
	
	if (choice==1)
	{system("cls");	DISPLAYMENU();
 
		cout << "CUSTOMER\nDear Customer how may I help you?\n";
		cout << "\nPress 1 for order food (one food at a time):\n2)Edit item\n3)BILL\n\n";
		getch();
		customer.Place_order();
		getch();
	}
	else
	{
	cout <<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\t\t\t\t\t\t\tADMIN FEATURES\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"; 
	H.login(p);
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\n\t1.CREATE EMPLOYEE RECORD";
	cout<<"\n\n\t2.DISPLAY ALL EMPLOYEE RECORDS";
	cout<<"\n\n\t3.SEARCH EMPLOYEE RECORD ";
	cout<<"\n\n\t4.MODIFY EMPLOYEE RECORD";
	cout<<"\n\n\t5.DELETE EMPLOYEE RECORD";
	cout<<"\n\n\t6. EXIT";
	cout<<"\n\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\n\tPlease Enter Your Choice (1-6): ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	H.WRITE_EMPLOYEE(); break;
	case '2':	H.display_all(); break;
	case '3':	cout<<"\n\n\tPlease Enter Employee's ID number: "; cin>>p;
				H.displayEmployee(p); break;
	case '4':	cout<<"\n\n\tEmployee ID number: "; cin>>p;
				H.modifyEmployee(p);break;
	case '5':	cout<<"\n\n\tEmployee ID number: "; cin>>p;
				H.deleteEmployee(p);break;
	case '6' :	exit(0); break;
	default:	cout<<"\a"; 
    }while(ch!='7');
    return 0;
	}
	}
};
int main()
{
	system("color 1E");
	cout << "\n\n"<< setw(95) << "BURGER O CLOCK RESTURANT" <<"\n\n\n\n\n\n\n\n";
	cout << setw(40) << "MENU" << setw(30) << "ORDER ONLINE" << setw(30) << "DEALS" << setw(30) << "LOCATIONS" <<endl;
	cout <<"\n\n\n\n\nBefore proceeding to any of the available options,Enter any one option from below:";
	cout << "\n\n1)CUSTOMER\t\t2)ADMIN\n\n";
	Resturant R;
	R.choice();
	getch();
	return 0;	
}
