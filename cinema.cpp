#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <string.h>


using namespace std;


int slot = 0 ;
string watch[100];
int menu();
int nowplaying();
int buyticket();
int comingsoon();
int watchlist();

int main(){
	string watch[100];
	
	menu();
	system("pause");
	return 0;
}

int menu(){
	int menu;
		
	for(;;){
		cout<<"\nATRACADORE CINEMA"<<endl;
		cout<<"     MENU"<<endl;
		cout<<"\n1.Now playing\n";
		cout<<"2.Coming soon\n";
		cout<<"3.Watchlist\n";
		cout<<"4.exit\n";cin>>menu;
		
		switch(menu){
			case 1: nowplaying();
			break;
			case 2:comingsoon();
			break;
			case 3:watchlist();
			break;
			case 4:return 0;
		}
	}
	
	
	
}


int nowplaying(){
int movies;
int ask;
	for(;movies != 6;){
	
	
	cout<<"\nATRACADORE CINEMA"<<endl;
	cout<<"   CATALOG \n \n";
	cout<<" 1.Spider-Man: Brand New Day \n 2.The Odyssey \n 3.Moana \n 4.El rompe creta \n 5.Toy Story 5 \n 6.exit \n \n";
	cout<<"Chose a movie to see the information: ";
	cin>>movies;
	
		switch(movies){
		
	case 1:cout<<"\nOVERVIEW\nFour years have passed since the events of No Way Home, and Peter is now an adult living entirely alone, having voluntarily erased himself from the lives and memories of those he loves. Crime-fighting in a New York that no longer knows his name, he’s devoted himself entirely to protecting his city — a full-time Spider-Man — but as the demands on him intensify, the pressure sparks a surprising physical evolution that threatens his existence, even as a strange new pattern of crimes gives rise to one of the most powerful threats he has ever faced. \n \n";
	  	cout<<"DIRECTOR:\nDestin Daniel Cretton\n\n";
	  	cout<<"\nPRODUCER:\nKevin Feige, Amy Pascal, Rachel O'Connor, Avi Arad\n\n";
	  	cout<<"\nCAST:\nTom Holland, Zendaya, Sadie Sink, Jacob Batalon, Jon Bernthal, Tramell Tillman, Michael Mando, Mark Ruffalo, Liza Colón-Zayas, Marvin Jones III, Eman Esfandi, Keith David, Zabryna Guevara, Rosario Dawson\n\n";
		buyticket();
		break;
		
		
	case 2:cout<<"\nOVERVIER\nOdysseus, the legendary Greek king of Ithaca, embarks on a long and perilous journey home following the Trojan War, chronicling his encounters with mythical beings such as the Cyclops Polyphemus, the Sirens, and the witch-goddess Circe, while attempting to reunite with his wife, Penelope.\n \n";
		cout<<"\nDIRECTOR:\nChristopher Nolan\n\n";
		cout<<"\nPRODUCER:\nChristopher Nolan, Emma Thomas\n\n";
		cout<<"\nCAST:\nMatt Damon, Tom Holland, Zendaya, Anne Hathaway\n\n";
	buyticket();
		break;
		
	case 3:cout<<"\nOVERVIEW\nPrompted by a summons from the ocean, Moana departs her home island of Motunui for the first time and travels past its barrier reef. Accompanied by the demigod Maui, she undertakes a voyage aimed at recovering the well-being of her community.\n \n ";
		cout<<"\nDIRECTOR:\nThomas Kail\n\n";
		cout<<"\nPRODUCER:\nDwayne Johnson, Lin-Manuel Miranda, Dany Garcia, Hiram Garcia, Beau Flynn\n\n";
		cout<<"\nCAST:\nCatherine Laga‘aia, Dwayne Johnson, Rena Owen\n\n";
	buyticket();
		break;
		
	case 4:cout<<"\nOVERVIEW\nwhy do you want to se that?????????? \n \n";
	cout<<"\nDIRECTOR:\nQuerry Piote\n\n";
		cout<<"\nPRODUCER:\nElma mag uebaso\n\n";
		cout<<"\nCAST:\nYour mother\n\n";
	buyticket();
		break;
		
	case 5:cout<<"\nOVERVIEW\nWhen Bonnie receives a Lilypad tablet as a gift and becomes obsessed, Buzz, Woody, Jessie and the rest of the gang's jobs become exponentially harder when they have to go head to head with the all-new threat to playtime. \n \n";
	   	cout<<"\nDIRECTOR:\nAndrew Stanton\n\n";
		cout<<"\nPRODUCER:\nLindsey Collins\n\n";
		cout<<"\nCAST:\nTom Hanks, Tim Allen, Joan Cusack\n\n";  
		 buyticket();
		break;
		
	case 6:return 0;
	
	case 7: default:;
	
	};

	
};
}

int buyticket(){
	int buy=0;
	int ticket;
	int random = 0;
	string seat;
	
	
srand(time(NULL));
	
		cout<<"\nMovie price: 450 DOP ";
		cout<<"Do you want to buy a ticket?\n1.Yes\n2.No \n";cin>>buy;
		if(buy == 1){
			cout<<"\nShowtimes available:\n";
			cout<<"1. 3 pm to 5 pm\n";
			cout<<"2. 6 pm to 8 pm\n";
			cout<<"3. 8 pm to 10 pm\n";
			cout<<"4. 10 pm to 12 am\n";cin>>ticket;
			
			random = rand() %100;
			
			
			cout << "\n";
cout << "                                  SCREEN \n";
cout << "\n";
cout << "        [A13] [A12] [A11] [A10] [A9] [A8] [A7] [A6] [A5] [A4] [A3] [A2] [A1]\n";
cout << "        [B13] [B12] [B11] [B10] [B9] [B8] [B7] [B6] [B5] [B4] [B3] [B2] [B1]\n";
cout << "\n";
cout << "                     [C8] [C7] [C6] [C5] [C4] [C3] [C2]\n";
cout << "\n";
cout << "        [D13] [D12] [D11] [D10] [D9] [D8] [D7] [D6] [D5] [D4] [D3] [D2] [D1]\n";
cout << "        [E13] [E12] [E11] [E10] [E9] [E8] [E7] [E6] [E5] [E4] [E3] [E2] [E1]\n";
cout << "        [F13] [F12] [F11] [F10] [F9] [F8] [F7] [F6] [F5] [F4] [F3] [F2] [F1]\n";
cout << "        [G13] [G12] [G11] [G10] [G9] [G8] [G7] [G6] [G5] [G4] [G3] [G2] [G1]\n";
cout << "        [H13] [H12] [H11] [H10] [H9] [H8] [H7] [H6] [H5] [H4] [H3] [H2] [H1]\n";
cout << "        [I13] [I12] [I11] [I10] [I9] [I8] [I7] [I6] [I5] [I4] [I3] [I2] [I1]\n";
cout << "        [J13] [J12] [J11] [J10] [J9] [J8] [J7] [J6] [J5] [J4] [J3] [J2] [J1]\n";
cout << "        [K13] [K12] [K11] [K10] [K9] [K8] [K7] [K6] [K5] [K4] [K3] [K2] [K1]\n";
cout << "\n"<<"\nSelect a seat: \n";cin>>seat;
			
			switch(ticket){
			
			case 1:
			cout<<"\n            INVOICE\n";
			cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nYour showtime is: 3 pm to 5 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			system("pause");
			break;
			
			case 2:
				cout<<"\n            INVOICE\n";
			cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nYour showtime is: 6 pm to  8 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			system("pause");
			break;
			
			case 3:
				cout<<"\n            INVOICE\n";
				cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nYour showtime is: 8 pm to 10 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			system("pause");
			break;
			
			case 4:
				cout<<"\n            INVOICE\n";
				cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nYour showtime is: 10 pm to 12 am\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			system("pause");
			break;
			}
			
		}else{
			return 0;
		}
	  
	
	
	
	return 0;
}

int comingsoon(){
	int goback;
	int coming;
	cout<<"\nATRACADORE CINEMA"<<endl;
	cout<<"   COMING SOON \n \n";
	cout<<"\n1.Math are for crazy people \n2.Dune: Part Three \n3.la avalancha de los chamos 3 \n4.haitians attack again";
	cout<<"\n \nDo you want to book any coming soon movie? \n1.Yes \n2.No \n";cin>>goback;
	
	if(goback == 1){
		cout<<"\nWich one?\n";cin>>coming;
		buyticket();
	}else{
		for(;goback != 1;){
			return 0;
		}
	}
	
return 0;
}

int watchlist(){
 int desicion;
 int desicion2;

 for(;;){
 
 cout<<"\n     WATCHLIST\n";
 cout<<"\n1.Add";
 cout<<"\n2.See your list";
 cout<<"\n3.Exit\n";cin>>desicion;
 
 switch(desicion){
 	
 	case 1:
 		cout<<"\nWhat movie do you want to add? \n";
 		cout<<"\n1.Spider-Man:Brand New Day \n2.The Odyssey \n3.Moana \n4.El rompe creta \n5.Toy Story 5 \n6.exit \n \n";cin>>desicion2;
 		switch(desicion2){
 			case 1:
 				cout<<"\nYour movie was succesfully add\n";
			 watch[slot] = "Spider-Man: Brand New Day";
 			slot++;
 			break;
 			
 	       case 2:
 	       	cout<<"\nYour movie was succesfully add\n";
 	       	watch[slot] = "The Odyssey";
 	       	slot++;
 	       	break;
 	       	
 	      case 3:
 	      	cout<<"\nYour movie was succesfully add\n";
 	      	watch[slot] = "Moana";
 	      	slot++;
 	      	break;
 	      	
 	      	case 4: 
			   cout<<"\nYour movie was succesfully add\n";
			   watch[slot] = "El rompe creta";
 	      	slot++;
 	      	break;
 	      	
 	      	case 5: 
 	      	cout<<"\nYour movie was succesfully add\n";
			watch[slot] = "Toy Story 5";
 	      	slot++;
 	      	break;
 	      	
 	      	case 6:
 	      		return 0;
 			
 		}
 		break;
 		case 2:
 			if(slot == 0){
 				cout<<"\n  WATCHLIST\n";
 				cout<<"\nYour list is empty\n\n";
 				system("pause");
 			}else{
 			
 			cout<<"\n  WATCHLIST\n\n";
 			for(int i=0;i<slot;i++){
 				cout<< i + 1 <<"."<<watch[i]<<endl;
 				
 			}cout<<endl;
			 system("pause");
 		}
 		break;
 		
 		case 3: return 0;
 }
}
}
