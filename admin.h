#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
class admin
{
	void WRITE_EMPLOYEE();
	void display_all();
	void displayEmployee(int);
	void ModifyEmployee(int);
	void deleteEmployee(int);
	char ch;
	int num;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2); 
	do
	{
	system("cls");
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
	case '1':	 WRITE_EMPLOYEE(); break;
	case '2':	 display_all(); break;
	case '3':	cout<<"\n\n\tPlease Enter Employee's ID number: "; cin>>num;
				displayEmployee(num); break;
	case '4':	cout<<"\n\n\tEmployee ID number: "; cin>>num;
				 ModifyEmployee(num);break;
	case '5':	cout<<"\n\n\tEmployee ID number: "; cin>>num;
				deleteEmployee(num);break;
	case '6' :	exit(0); break;
	default:	cout<<"\a"; 
		
    }
	}while(ch!='7');
 
	return 0;
}; 
class employee: protected admin
{	long long int contact;
	int idnum;
	float age,sal;
	char name[50],res[50],qual[50];
	char gender;	
public:
	void getdata();		
	void showdata() const;	
	 int getIDNum()
 	{
 		return idnum;
 	}

string getname() const
	{
		return name;
	}
}; 
 
 

void employee::getdata()
{
	cout<<"\nEmployee ID: ";
	cin>>idnum;
	cout<<"\n\nEnter Employee Name: ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nAge: ";
	cin>>age;
	cout<<"\nResidence: ";
	cin >> res;
	cout<<"\nGender: ";cin>>gender;
	
	if (gender!='M' || gender!='m' || gender!='F'||gender!='f'||gender!='o'||gender!='O')
	{
	cout << "Enter again: ";cin >> gender;	
	}
	if (gender=='M' || gender=='m' || gender=='F'||gender=='f'||gender=='o'||gender=='O')
	cout<<"\nQualification: ";cin >> qual;
	cout << "\nContact: ";cin >> contact;
	cout << "\nSalary: ";cin >> sal;
}
 
void employee::showdata() const
{
	cout <<setw(25) <<"EMPLOYEE DETAILS\n\n\n";
	cout<<"\nID Number: "<<idnum;
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
	cout<<"\nResidence: "<<res;
	cout<<"\nGender: "<<gender;
	cout<<"\nQualification: "<<qual;
	cout<<"\nContact: "<<contact;
	cout<<"\nSalary: "<<sal;
}


				
 
int admin::WRITE_EMPLOYEE()
{
	employee e;
	ofstream outFile;
	outFile.open("emp.txt",ios::binary|ios::app);
	e.getdata();
	outFile.write(reinterpret_cast<char *> (&e), sizeof(employee));
	outFile.close();
    	cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	cin.get();
}
 
void admin::display_all()
{
	employee e;
	ifstream inFile;
	inFile.open("emp.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&e), sizeof(employee)))
	{
		e.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
 
 
 
void admin::displayEmployee(int n)
{
	employee e;
	ifstream inFile;
	inFile.open("emp.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&e), sizeof(employee)))
	{
		if(e.getIDNum()==n)
		{
	  		 e.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}
 
 
void admin::ModifyEmployee(int n)
{
	bool found=false;
	employee e;
	fstream File;
	File.open("emp.txt",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{
 
		File.read(reinterpret_cast<char *> (&e), sizeof(employee));
		if(e.getIDNum()==n)
		{
			e.showdata();
			cout<<"\n\nPlease Enter The New Details of EMPLOYEE:\n\n"<<endl;
			e.getdata();
		    	int pos=(-1)*static_cast<int>(sizeof(e));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&e), sizeof(employee));
		    	cout<<"\n\n\t Record Updated";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}
 
 
 
void admin::deleteEmployee(int n)
{
	employee e;
	ifstream inFile;
	inFile.open("emp.txt",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&e), sizeof(employee)))
	{
		if(e.getIDNum()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&e), sizeof(employee));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}
