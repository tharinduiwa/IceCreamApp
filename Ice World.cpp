#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 

{
	
		void admin();
		admin();
		void logIn();
		void signup();
		int logingMenu();
		
		
		int choice;
		
		do{	// do - while loop starts here
	
		choice= logingMenu();	// call menu unit to display options
	
		switch(choice)	// menu selection can select the unit to be executed
		{
		case 1: logIn();	
			break;
		case 2: signup();	
			break;
		case 3:cout<<"Exited successfully!\n ";
			break;
		}
		system("pause");
		
		}while(choice!=3);
				

}

//========================================================================================================================================================================
//admin for add update delete files
void admin() 

{
	 
	void admin();
	string adname,adpassword,line1,line2;
	ifstream adminfile;
	
	cout << "To Access Please Enter The Administrator Username And Password\n\n";
	
	adminfile.open("admin.txt");
	
	cout <<"please input admin name: ";
	cin >> adname;
	
	cout << "please input admin password: ";
	cin >> adpassword;
	
	while(adminfile>>line1>>line2)	
	
	{
	
	
	if(adname==line1 && adpassword==line2)
	{
			
			cout << "\nLogin success\n"<<endl;
			
			system("pause");
			
	}
	
	} //while loops end
	
	if(adname!=line1 && adpassword!=line2)
	
	{
		
			cout << "wrong admin name or password\n"<<endl;
			
			
	adminfile.close();
	
	admin();
	
	}	
	

}

//========================================================================================================================================================================	
//switch menu
int logingMenu()
{
	int sel;
	system ("cls");
	
	cout<<"### ICE WORLD LOGGIN SYSTEM ###\n"<<endl;
	cout<<"1.[press 1] to log in\n"<<endl;
	cout<<"2.[press 2] to create New Acc\n"<<endl; 
	cout<<"3.[press 3] to exit"<<endl;
	
	cout<<"\nSelect the option : ";
	cin>>sel;

	return sel;	
	
}

//========================================================================================================================================================================
//login	
void logIn()

{
	void mainmenu();		
	ifstream infile;
	string username,password,line1,line2;
	void logIn();
	
	infile.open("loging.txt");
	
	
	cout << "please input your username: "; //login in username password
	cin >> username;
	
	cout << "please input your password: ";
	cin >> password;
	
	while(infile>>line1>>line2)
	
	{
	
	if(username==line1 && password==line2)
	{
			
			cout << "\nlogin success\n";
			system("pause");
			system("cls");
			mainmenu();
	}
	
	} //while loop ends here
	
	if(username!=line1 && password!=line2) 
	
	{
	
	cout << "\nInvalid username or password\n";
		
	infile.close();
	logIn();
		
	}
	 
	
			
			
}

//========================================================================================================================================================================
//signup
void signup() 

{
	string un,pw;
	ofstream outfile;
	
	outfile.open("loging.txt",ios::app);
	
	cout << "please input a username: "; //signup username password
	cin >> un;
	
	cout << "please input a password: ";
	cin >> pw;
	
	outfile <<endl<<un<<" "<<pw;
	
	cout << "register successful"<<endl;
	
	outfile.close();
	
	
}
	
//========================================================================================================================================================================
//mainmenu
void mainmenu() 

{
	
	
	int logingMenu();
	void mainmenu();
	string selection,option;
	int icecream();
	void addflav();
	void deleteflavour();
	void addupdatedelete();
	
	cout << "||********||Welcome To Ice World||********||\n\n\n";
	cout << "1.[press 1] to ice cream Menu\n";
	cout << "2.[press 2] to ADD/UPDATE/DELETE Flavour details\n";
	cout << "3.[press 3] to View Sales Details\n";
	cout << "4.[press 4] to logout\n";
	cout << "5.[press 5] to View Company Details\n\n\n";
	
	cout << "please enter the selection: \n";
	cin >> selection;
	
//if statment for selections
if (selection <= "6") 

{

	
	if (selection == "1") 
	
	{
	
	system("cls");
	icecream();	
		
	}
	
	if (selection == "2") 
	
	{
	 
	void admin();
	admin();	
	addupdatedelete();	
		
	}
	
	if (selection == "3") 
	
	{
		
		string line1,line2,line3;
		ifstream sales;
		
		sales.open("billing.txt");
		
		while(sales>>line1>>line2>>line3) 
		
		{
			
			cout <<"\n"<< line1 <<"\t"<< line2 <<" "<< line3 <<endl;
					
		}
		
		system("pause");
		system("cls");
		mainmenu();
		
		sales.close();
		
	}
	
	if  (selection == "4") 
	
	{
		
		system("cls");
		logingMenu();
	}
	
	if (selection == "5")
	
	{
		
		system("cls");
		
		cout <<"\n|ICE WORLD is the best&famous ice-cream seller in Kandy|\n"<<endl;
		cout <<"23/7,\nKandyKCC,\nKandy\n\n";
		cout <<"|contact Us(+9476459890) (+94783457568)|\n";
		cout <<"\n|Email: iceword@kcc.gmail.com|\n"<<endl;
		
		system("pause");
		system("cls");
		
		mainmenu();
		
	}
	
	if (selection == "6")
	
	{
		
		exit (0);
	}
	
}

else {

system("cls"); //if selection is non of this it will call to main menu
	
mainmenu();	
	
	
}

system("cls");


}

//========================================================================================================================================================================
//icecream selling
void icecream() 

{
		
	void mainmenu();
	double line1,selection,line3,balance,amount;
	string line2;
	int exit,qauntity,cash;
	float quantity;
	double total = 0;
		
	ifstream flav;
		
	flav.open("flavors.txt");
		
	cout << "<) == Ice Creame flavors == (> \n";
		
		while(flav>>line1>>line2>>line3) 
		
		{
				
			cout << "\n"<< line1 <<"\t"<< line2 <<"\t"<<"Rs."<< line3<<"\n"<<endl;
		}
		
			flav.close(); // end of displaying the list

	
		cout << "select a Ice Creame customer like:  ";
		cin >> selection;
		
        cout <<"please enter the qauntity : ";
        cin >> qauntity;
		
		
   	ifstream bil;
     
   	bil.open("flavors.txt");
   
   
   while(bil>>line1>>line2>>line3)
   
   {
   	
   	
		if (selection == line1)
		
		{
                                           
        	total = line3 * qauntity;
                                           
    		cout <<"\ntotal cost Rs: "<<total<<endl;
                                          
                                       
 
    		ofstream sales;
                                           
    		sales.open("billing.txt",ios::app);
                                           
    		sales <<line2<<" "<<qauntity<<" "<<total << endl;
                                           
			sales.close();
                                           
			bil.close();
                                           
                                           
                                           
                                           
			cout <<"\nCash Rs: ";
			cin >> cash;
                                           
			balance =cash-total;
                                           
			cout <<"\ntotal balance Rs: "<< balance <<"\n\n"<< endl;
          
		}  
                                   
                                   
  	}
    
    
    system("pause");
    system("cls");
    
    
    mainmenu(); //after all done calling to mainmenu
			
			
}

//========================================================================================================================================================================
//add/update/delete flavors
void addupdatedelete() 

{
	
	void mainmenu();
	void addflav();
	void addupdatedelete();
	void deleteflavour();
	void updateflavour();
	string selection,option;
	
		system("cls");
		cout << "ADD/UPDATE/DELETE Flavour details\n\n";
		
		cout << "1.[press 1] to Add\t2.[press 2] to Update\t3.[press 3] to Delete\t4.[press 4] to exit\n";
		
		void flavdisplay();
		flavdisplay();
		
		cout <<"\nenter option: ";
		cin >> option;
		
		
		if (option <= "4") 
		
		{
		
		
		if (option == "1") 
		{
			
			addflav();
			
		}
		
		if (option == "2") 
		{
			
		updateflavour();	
		addupdatedelete();
			
		}
		
		if (option == "3") 
		{
		
		deleteflavour();
		addupdatedelete();	
			
		}
		
		if (option =="4") 
		{
			
		system("cls");	
		mainmenu();
		
		}
}

else {

system("cls");
addupdatedelete();	
	
}


}

//=========================================================================================================================================================================
//flavor display
void flavdisplay() 

{
	
	ifstream flav;
	int line1,line3;
	string line2;
	
		flav.open("flavors.txt");
		
		cout << "\n<) == Ice Creame flavors == (> \n";
		
		while(flav>>line1>>line2>>line3) 
		{
			
			cout << "\n"<< line1 <<"\t"<< line2 <<"\t"<<"Rs."<< line3<<"\n"<<endl;
		}
		
		flav.close();
	
	
}

//========================================================================================================================================================================
//add flavor
void addflav() 

{
	
		void addupdatedelete();
		ifstream flav;
		ofstream flava;
		int id,price,line1,line3;
		string flavor,line2;
		void addflav();
		
		
		flava.open("flavors.txt",ios::app);
			
			cout <<"\ninput a enter id no: ";
			cin >> id;
			
			cout <<"\ninput a flavor: ";
			cin >> flavor;
			
			cout <<"\ninput a price: ";
			cin >> price;
	
		flava << endl <<id<<" "<<flavor<<" "<<price;
		
		cout << "\nflavor added successfully!\n\n";
		system("pause");
		
		flava.close();
			
  addupdatedelete();
	
}

//========================================================================================================================================================================
//deleteflavor
 void deleteflavour()
{
	system("pause");

	string flid[50], name[50], price[50];
	int z = 0;
	ifstream flavour;
	ofstream flavours;
	
	flavour.open("flavors.txt");

	flavour >> flid[z];
	flavour >> name[z];
	flavour >> price[z];
	while (flavour) 
	
	{ 
	    
		cout <<endl<<flid[z]<<" "<< name[z] <<" "<< price[z] << endl;
		z++;
		flavour >> flid[z];
		flavour >> name[z];
		flavour >> price[z];
	}

	flavour.close();

	flavours.open("flavors.txt");
	string flanum;
	system("cls");
	cout << "\nEnter flavour ID : ";
	cin >> flanum;

	for (int i = 0; i<z; i++) 
	
	{
		
		if (flid[i] != flanum) 
		
		{

			flavours << left <<" "<< flid[i] <<" "<< name[i] <<" "<< price[i] << endl;
		}

	}
	
	cout << "\nFlavor Deleted Succsfully!" << endl;
	system("pause");
	
	
	flavour.close();
} 

//========================================================================================================================================================================
//update flavor
void updateflavour()
{
	string flid[50], name[50], price[50];
	int x = 0;
	ifstream flavours;
	string flanum;
	ofstream flavour;
	
	
	flavours.open("flavors.txt");

	flavours >> flid[x];
	flavours >> name[x];
	flavours >> price[x];
	while (flavours) 
	
	{

		cout <<flid[x]<<" "<< name[x] <<" "<< price[x] << endl;
		x++;
		flavours >> flid[x];
		flavours >> name[x];
		flavours >> price[x];
	}

	flavours.close();

	
	system("cls");
	cout << "\nEnter flavor ID : ";
	cin >> flanum;


	for (int i = 0; i < x; i++) 
	
	{
		if (flid[i] == flanum) 
		
		{
			
			cout << "Enter a new flavor name : ";
			cin >> name[i];
			cout << "\nEnter a new flavor price: ";
			cin >> price[i];
			
			flavour.open("flavors.txt");

			for (int i = 0; i < x; i++) 
			
			{
				
				flavour << flid[i] <<" "<< name[i] <<" "<< price[i] << endl;
			}
			
			cout << "\nFlavor Updated Succsfully!" << endl;
			system("pause");
			
			flavour.close();
			

		}
	}
}

//end
//========================================================================================================================================================================
