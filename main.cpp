#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainmenu();

class Management
{
	public:
	Management()
	{
	  mainmenu();
	}
};


class details
{
    //know detail of customer
	public:
	static string name,gender;
	int phonenum;
	string add;
	int age;
	static int cid;
	char arr[100];
    void information()
    {
    	cout<<"\n enter the customer id:";
    	cin>>cid;
    	cout<<"\n enter the name:";
    	cin>>name;
    	cout<<"\n enter the age:";
    	cin>>age;
    	cout<<"\n address:";
    	cin>>add;
    	cout<<"\n gender:";
    	cin>>gender;
    	cout<<"your details are saved with us\n"<<endl;

    }
 };

 int details::cid;
 string details::name;
 string details::gender;
 class registration
 {
     //registration for flight that is where you want to go
 	public:
 	static int choice;
 	int choice1;
 	int back;
 	static float charges;
 	void flight()
 	{
 		string flightN[]={"dubai","canada","UK","USA","australia","europe"};

 		for(int a=0;a<6;a++)
 		{
 			cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
 		}
 		cout<<"\nwelcome to the airlines"<<endl;
 		cout<<"\npress the number of the country to which you want to fly:";
 		cin>>choice;
 		switch(choice)
 		{
 			case 1:
 			{
 			    //list of flight for dubai
 				cout<<"______________welcome o dubai emirates_________________\n"<<endl;
 				cout<<"your comfort is our priority,enjoy the journey!"<<endl;
 				cout<<"folloing are the flight\n"<<endl;

 				cout<<"1.dub-49"<<endl;
 				cout<<"\t04-02-2023 8:00AM 10 hrs Rs.14000"<<endl;
 				cout<<"2.dub-488"<<endl;
 				cout<<"\t03-02-2023 10:00AM 10 hrs Rs.10000"<<endl;
 				cout<<"3.dub-5"<<endl;
 				cout<<"\t02-02-2023 12:00AM 10 hrs Rs.9000"<<endl;

 				cout<<"\nselect the flight you want to book:";
 				cin>>choice1;
 				if(choice1==1)
 				{
 					charges=14000;
 					cout<<"\nyou have successfully book the flight dub-49"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==2)
 				{
 					charges=10000;
 					cout<<"\nyou have successfully book the flight dub-488"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==3)
 				{
 					charges=9000;
 					cout<<"\nyou have successfully book the flight dub-5"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else {
 					cout<<"invalid input ,shifting to previous menu"<<endl;
 					flight();
 				}
 				cout<<"press any key to go back to main menu:"<<endl;
 				cin>>back;
 				if(back==1)
 				{
 					mainmenu();
 				}
 				else
 				{
 					mainmenu();
 				}
 			}
 			case 2:
 			{
 			    //list of flight for canada
 			   	cout<<"______________welcome o canadian airlines_________________\n"<<endl;
 				cout<<"your comfort is our priority,enjoy the journey!"<<endl;
 				cout<<"folloing are the flight\n"<<endl;

 				cout<<"1.can-49"<<endl;
 				cout<<"\t04-02-2023 8:00AM 10 hrs Rs.34000"<<endl;
 				cout<<"2.can-488"<<endl;
 				cout<<"\t03-02-2023 10:00AM 10 hrs Rs.290000"<<endl;
 				cout<<"3.can-5"<<endl;
 				cout<<"\t02-02-2023 12:00AM 10 hrs Rs.40000"<<endl;

 				cout<<"\nselect the flight you want to book:";
 				cin>>choice1;
 				if(choice1==1)
 				{
 					charges=34000;
 					cout<<"\nyou have successfully book the flight can-49"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==2)
 				{
 					charges=290000;
 					cout<<"\nyou have successfully book the flight can-488"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==3)
 				{
 					charges=40000;
 					cout<<"\nyou have successfully book the flight can-5"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else {
 					cout<<"invalid input ,shifting to previous menu"<<endl;
 					flight();
 				}
 				cout<<"press any key to go back to main menu:"<<endl;
 				cin>>back;
 				if(back==1)
 				{
 					mainmenu();
 				}
 				else
 				{
 					mainmenu();
 				}
 			}
 			case 3:
 			{
 			    //list of flight for UK
 				cout<<"______________welcome UK airways_________________\n"<<endl;
 				cout<<"your comfort is our priority,enjoy the journey!"<<endl;
 				cout<<"folloing are the flight\n"<<endl;

 				cout<<"1.UK-49"<<endl;
 				cout<<"\t04-02-2023 8:00AM 14 hrs Rs.44000"<<endl;

 				cout<<"\nselect the flight you want to book:";
 				cin>>choice1;
 				if(choice1==1)
 				{
 					charges=44000;
 					cout<<"\nyou have successfully book the flight UK-49"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else {
 					cout<<"invalid input ,shifting to previous menu"<<endl;
 					flight();
 				}
 				cout<<"press any key to go back to main menu:"<<endl;
 				cin>>back;
 				if(back==1)
 				{
 					mainmenu();
 				}
 				else
 				{
 					mainmenu();
 				}
 			}
 			case 4:
 			{
 			    //list of flight for US
 				cout<<"______________welcome o US airways_________________\n"<<endl;
 				cout<<"your comfort is our priority,enjoy the journey!"<<endl;
 				cout<<"folloing are the flight\n"<<endl;

 				cout<<"1.USA-498"<<endl;
 				cout<<"\t04-02-2023 8:00AM 10 hrs Rs.37000"<<endl;
 				cout<<"2.USA-488"<<endl;
 				cout<<"\t03-02-2023 10:00AM 10 hrs Rs.390000"<<endl;
 				cout<<"3.USA-598"<<endl;
 				cout<<"\t02-02-2023 12:00AM 10 hrs Rs.42000"<<endl;

 				cout<<"\nselect the flight you want to book:";
 				cin>>choice1;
 				if(choice1==1)
 				{
 					charges=37000;
 					cout<<"\nyou have successfully book the flight USA-49"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==2)
 				{
 					charges=39000;
 					cout<<"\nyou have successfully book the flight USA-488"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==3)
 				{
 					charges=42000;
 					cout<<"\nyou have successfully book the flight USA-5"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else {
 					cout<<"invalid input ,shifting to previous menu"<<endl;
 					flight();
 				}
 				cout<<"press any key to go back to main menu:"<<endl;
 				cin>>back;
 				if(back==1)
 				{
 					mainmenu();
 				}
 				else
 				{
 					mainmenu();
 				}
 			}
 			case 5:
 			{
 			    //list of flight for australia
 				cout<<"______________australian airlines_________________\n"<<endl;
 				cout<<"your comfort is our priority,enjoy the journey!"<<endl;
 				cout<<"folloing are the flight\n"<<endl;

 				cout<<"1.AUS-49"<<endl;
 				cout<<"\t04-02-2023 8:00AM 10 hrs Rs.44000"<<endl;
 				cout<<"2.AUS-488"<<endl;
 				cout<<"\t03-02-2023 10:00AM 10 hrs Rs.340000"<<endl;
 				cout<<"3.AUS-5"<<endl;
 				cout<<"\t02-02-2023 12:00AM 10 hrs Rs.42000"<<endl;

 				cout<<"\nselect the flight you want to book:";
 				cin>>choice1;
 				if(choice1==1)
 				{
 					charges=44000;
 					cout<<"\nyou have successfully book the flight AUS-49"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==2)
 				{
 					charges=34000;
 					cout<<"\nyou have successfully book the flight AUS-488"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==3)
 				{
 					charges=42000;
 					cout<<"\nyou have successfully book the flight AUS-5"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else {
 					cout<<"invalid input ,shifting to previous menu"<<endl;
 					flight();
 				}
 				cout<<"press any key to go back to main menu:"<<endl;
 				cin>>back;
 				if(back==1)
 				{
 					mainmenu();
 				}
 				else
 				{
 					mainmenu();
 				}
 			}
 			case 6:
 			{
 			    //list of flight for europian airline
 				cout<<"______________welcome to europian airlines_________________\n"<<endl;
 				cout<<"your comfort is our priority,enjoy the journey!"<<endl;
 				cout<<"folloing are the flight\n"<<endl;

 				cout<<"1.EUP-49"<<endl;
 				cout<<"\t04-02-2023 8:00AM 10 hrs Rs.36000"<<endl;
 				cout<<"2.EUP-488"<<endl;
 				cout<<"\t03-02-2023 10:00AM 10 hrs Rs.37000"<<endl;
 				cout<<"3.EUP-5"<<endl;
 				cout<<"\t02-02-2023 12:00AM 10 hrs Rs.31000"<<endl;

 				cout<<"\nselect the flight you want to book:";
 				cin>>choice1;
 				if(choice1==1)
 				{
 					charges=36000;
 					cout<<"\nyou have successfully book the flight EUP-49"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==2)
 				{
 					charges=37000;
 					cout<<"\nyou have successfully book the flight EUP-488"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else if(choice1==3)
 				{
 					charges=31000;
 					cout<<"\nyou have successfully book the flight EUP-5"<<endl;
 					cout<<"you acn go to back to menu and take the ticket"<<endl;
 				}
 				else {
 					cout<<"invalid input ,shifting to previous menu"<<endl;
 					flight();
 				}
 				cout<<"press any key to go back to main menu:"<<endl;
 				cin>>back;
 				if(back==1)
 				{
 					mainmenu();
 				}
 				else
 				{
 					mainmenu();
 				}
 			}
 			default:
 			{
 				cout<<"Invalid Input,please you shifting to the main menu !"<<endl;
 				mainmenu();
 				break;
 			}
 		}
 	}
 };


 float registration::charges;
 int registration :: choice;
 class ticket:public registration,details
 {
 	public:
 	void bill()
 	{
 		string destination="";
 		ofstream outf("record.txt");
 		{
 			outf<<"__________XYZ Airlnes________"<<endl;
 			outf<<"__________Ticket_____________"<<endl;
 			outf<<"_____________________________"<<endl;

 			outf<<"customer ID:"<<details::cid<<endl;
 			outf<<"customer name:"<<details::name<<endl;
 			outf<<"customer Gender:"<<details::gender<<endl;
 			outf<<"\tDEscription"<<endl<<endl;
 			if(registration::choice==1)
 			{
 				destination="dubai";
 			}
 			else if(registration::choice==2)
 			{
 				destination="canada";
 			}
 			else if(registration::choice==3)
 			{
 				destination="UK";
 			}
 			else if(registration::choice==4)
 			{
 				destination="USA";
 			}
 			else if(registration::choice==5)
 			{
 				destination="Australia";
 			}
 			else if(registration::choice==6)
 			{
 				destination="europe";
 			}
 			outf<<"Destination\t\t"<<destination<<endl;
 			outf<<"flight cost:\t\t"<<registration::charges<<endl;
 		}
 		outf.close();
 	}
 	void dispbill()
 	{
 	    //cout<<"dbg in dispbill\n";
 	    //return;
 		ifstream ifs("record.txt");
 		{
 			if(ifs.is_open()==false)
 			{
 				cout<<"File error"<<endl;
 			}else{
 			while(!ifs.eof())
 			{
 				ifs.getline(arr,100);
 				cout<<arr<<endl;
 			}
 			}

 		}
 		ifs.close();
 	}
 };

void mainmenu()
{
	int lchoice;
	int back;
	cout<<"\t       XYX Airlines\n"<<endl;
	cout<<"\t________Main Menu______"<<endl;
	cout<<"\t_________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t press 1 to add customer details   \t"<<endl;
	cout<<"\t\t press 2 for flight registraion    \t"<<endl;
	cout<<"\t\t press 3 for ticket and charges    \t"<<endl;
	cout<<"\t\t press 4 for exit                  \t"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;
    cout<<"\t_____________________________"<<endl;

    cout<<"Enter your choice : "<<endl;
    cin>>lchoice;
    details d;
    registration r;
    ticket t;
    switch(lchoice)
    {
    	case 1:
    	{
    		cout<<"_________customer________\n"<<endl;
    		d.information();
    		cout<<"press any to go back to Main menu";
    		cin>>back;
    		if(back==1)
    		{
    			mainmenu();
    		}
    		else
    		{
    			mainmenu();
    		}
    		break;
    	}
    	case 2:
    	{
    		cout<<"_____book a flight using this system______\n"<<endl;
    		r.flight();
    		break;
    	}
    	case 3:
    	{
    		cout<<"____get your ticket______\n"<<endl;
    		t.bill();
    		cout<<"your ticket is printed,you can collect it\n"<<endl;
    		cout<<"press 1 to display your ticket";
    		cin>>back;
    		if(back==1)
    		{
    			t.dispbill();
    			cout<<"press any key to go back to main menu:";
    			cin>>back;
    			if(back==1)
    			{
    				mainmenu();
    			}
    			else
    			{
    				mainmenu();
    			}
    		}
    		else
    		{
    			mainmenu();
    		}
    		break;
    	}
    	case 4:
    	{
    	    cout<<"\n\n\t_____thankyou dbgd here_______"<<endl;
//    		cout<<"\n\n\t_____thankyou_______"<<endl;
    		break;
    	}
    	default:
    	{
    		cout<<"invalid input,plearse try again\n"<<endl;
    		//mainmenu();
    		break;
    	}
    }

}



int main()
{
	Management Mobj;
	return 0;
}
