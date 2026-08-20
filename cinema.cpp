#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <fstream>
#include <cstdio>


using namespace std;

int borralopa=0;
int error();
string idk;
int slot = 0 ;
string watch[100];
int menu();
int nowplaying();
int buyticket();
int comingsoon();
int watchlist();


int main(){
	
	
	menu();
	cout<<"\nSee you soon";
	system("pause > nul");
	return 0;
}

int menu(){
	int menu;
	
	for(;;){
		system("cls");
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
			break;
			
		    default:
				error();
				break;
		}
	}
	
	
	
}


int nowplaying(){
int movies;
int ask;

	for(;;){
	system("cls");
	
	cout<<"\nATRACADORE CINEMA"<<endl;
	cout<<"   CATALOG \n \n";
	cout<<" 1.Spider-Man: Brand New Day \n 2.The Odyssey \n 3.Moana \n 4.El rompe creta \n 5.Toy Story 5 \n 6.exit \n \n";
	cout<<"Chose a movie to see the information: ";
	cin>>movies;
	
		switch(movies){
		
	case 1:
	system("cls");
	cout<<"\nSpider-Man: Brand New Day \n";
	cout<<"\nOVERVIEW\nFour years have passed since the events of No Way Home, and Peter is now an adult living entirely alone, having voluntarily erased himself from the lives and memories of those he loves. Crime-fighting in a New York that no longer knows his name, he’s devoted himself entirely to protecting his city — a full-time Spider-Man — but as the demands on him intensify, the pressure sparks a surprising physical evolution that threatens his existence, even as a strange new pattern of crimes gives rise to one of the most powerful threats he has ever faced. \n \n";
	  	cout<<"DIRECTOR:\nDestin Daniel Cretton\n\n";
	  	cout<<"\nPRODUCER:\nKevin Feige, Amy Pascal, Rachel O'Connor, Avi Arad\n\n";
	  	cout<<"\nCAST:\nTom Holland, Zendaya, Sadie Sink, Jacob Batalon, Jon Bernthal, Tramell Tillman, Michael Mando, Mark Ruffalo, Liza Colón-Zayas, Marvin Jones III, Eman Esfandi, Keith David, Zabryna Guevara, Rosario Dawson\n\n";
	  	cout<<"\nPress enter to see the price\n";
		system("pause > nul");
		idk = "Spider-Man: Brand New Day";
		buyticket();
		break;
		
		
	case 2:
	system("cls");
	cout<<"\nThe Odyssey\n";
	cout<<"\nOVERVIER\nOdysseus, the legendary Greek king of Ithaca, embarks on a long and perilous journey home following the Trojan War, chronicling his encounters with mythical beings such as the Cyclops Polyphemus, the Sirens, and the witch-goddess Circe, while attempting to reunite with his wife, Penelope.\n \n";
		cout<<"\nDIRECTOR:\nChristopher Nolan\n\n";
		cout<<"\nPRODUCER:\nChristopher Nolan, Emma Thomas\n\n";
		cout<<"\nCAST:\nMatt Damon, Tom Holland, Zendaya, Anne Hathaway\n\n";
		cout<<"\nPress enter to see the price\n";
		system("pause > nul");
		idk = "The Odyssey";
	buyticket();
		break;
		
	case 3:
	system("cls");
	cout<<"\nMoana\n";
	cout<<"\nOVERVIEW\nPrompted by a summons from the ocean, Moana departs her home island of Motunui for the first time and travels past its barrier reef. Accompanied by the demigod Maui, she undertakes a voyage aimed at recovering the well-being of her community.\n \n ";
		cout<<"\nDIRECTOR:\nThomas Kail\n\n";
		cout<<"\nPRODUCER:\nDwayne Johnson, Lin-Manuel Miranda, Dany Garcia, Hiram Garcia, Beau Flynn\n\n";
		cout<<"\nCAST:\nCatherine Laga‘aia, Dwayne Johnson, Rena Owen\n\n";
		cout<<"\nPress enter to see the price\n";
		system("pause > nul");
		idk = "Moana";
	buyticket();
		break;
		
	case 4:
	system("cls");
	cout<<"\nEl rompe creta\n";
	cout<<"\nOVERVIEW\nwhy do you want to se that?????????? \n \n";
	cout<<"\nDIRECTOR:\nQuerry Piote\n\n";
		cout<<"\nPRODUCER:\nElma mag uebaso\n\n";
		cout<<"\nCAST:\nYour mother\n\n";
		cout<<"\nPress enter to see the price\n";
		system("pause > nul");
		idk = "El rompe creta";
	buyticket();
		break;
		
	case 5:
	system("cls");
	cout<<"\nToy Story 5\n";
	cout<<"\nOVERVIEW\nWhen Bonnie receives a Lilypad tablet as a gift and becomes obsessed, Buzz, Woody, Jessie and the rest of the gang's jobs become exponentially harder when they have to go head to head with the all-new threat to playtime. \n \n";
	   	cout<<"\nDIRECTOR:\nAndrew Stanton\n\n";
		cout<<"\nPRODUCER:\nLindsey Collins\n\n";
		cout<<"\nCAST:\nTom Hanks, Tim Allen, Joan Cusack\n\n";  
		cout<<"\nPress enter to see the price\n";
		system("pause > nul");
		idk = "Toy Story 5";
		 buyticket();
		break;
		
	case 6:return 0;
	
	default:
	error();
	
	};

	
};
}

int buyticket(){
	int buy=0;
	int ticket;
	int random = 0;
	int print =0;
	string seat;
	
	
srand(time(NULL));
	
		cout<<"\nMovie price: 450 DOP ";
		cout<<"Do you want to buy a ticket?\n1.Yes\n2.No \n";cin>>buy;
		system("cls");
		
		
		if(buy == 1){
			cout<<"\nShowtimes available:\n";
			cout<<"1. 3 pm to 5 pm\n";
			cout<<"2. 6 pm to 8 pm\n";
			cout<<"3. 8 pm to 10 pm\n";
			cout<<"4. 10 pm to 12 am\n";cin>>ticket;
			
			if(ticket > 4){
				error();
				return 0;
			}
		 
			random = rand() %100;
			
			system("cls");
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
system("cls");

            string printar;
			int save;
			
			switch(ticket){
			
		case 1:
			cout<<"\n            INVOICE\n";
			cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nMovie: "<<idk<<endl;
			cout<<"\nYour showtime is: 3 pm to 5 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			cout<<"\nDo you want to save your invoice?\n1.Yes\n2.No\n";cin>>save;
			system("cls");
		
			if(save == 1){
					cout<<"Type the name of your invoice: ";
					cin.ignore();
					getline(cin,printar);
					cout<<"\nYor ticket was save correctly\n\n";
				ofstream invoice((printar +".txt").c_str());
				
				invoice<<"\n            INVOICE\n";//save in system
			invoice<<"\nMovie: "<<idk<<endl;
			invoice<<"\nYour showtime is: 3 pm to 5 pm\n";
			invoice<<"\nYour seat is: "<<seat<<"\n";
			invoice<<"\nYour number of ticket is: "<<random<<endl<<endl;
			invoice.close();
			}
			cout<<"\nPress enter to continue";
			system("pause > nul");
			break;
			
	    case 2:
				cout<<"\n            INVOICE\n";
			cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nMovie: "<<idk<<endl;
			cout<<"\nYour showtime is: 3 pm to 5 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			cout<<"\nDo you want to save your invoice?\n1.Yes\n2.No\n";cin>>save;
			system("cls");
		
			if(save == 1){
					cout<<"Type the name of your invoice: ";
					cin.ignore();
					getline(cin,printar);
					cout<<"\nYor ticket was save correctly\n\n";
				ofstream invoice((printar +".txt").c_str());
				
				invoice<<"\n            INVOICE\n";//save in system
			invoice<<"\nMovie: "<<idk<<endl;
			invoice<<"\nYour showtime is: 3 pm to 5 pm\n";
			invoice<<"\nYour seat is: "<<seat<<"\n";
			invoice<<"\nYour number of ticket is: "<<random<<endl<<endl;
			invoice.close();
			}
			cout<<"\nPress enter to continue";
			system("pause > nul");
			break;
			
			case 3:
				cout<<"\n            INVOICE\n";
			cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nMovie: "<<idk<<endl;
			cout<<"\nYour showtime is: 3 pm to 5 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			cout<<"\nDo you want to save your invoice?\n1.Yes\n2.No\n";cin>>save;
			system("cls");
		
			if(save == 1){
					cout<<"Type the name of your invoice: ";
					cin.ignore();
					getline(cin,printar);
					cout<<"\nYor ticket was save correctly\n\n";
				ofstream invoice((printar +".txt").c_str());
				
				invoice<<"\n            INVOICE\n";//save in system
			invoice<<"\nMovie: "<<idk<<endl;
			invoice<<"\nYour showtime is: 3 pm to 5 pm\n";
			invoice<<"\nYour seat is: "<<seat<<"\n";
			invoice<<"\nYour number of ticket is: "<<random<<endl<<endl;
			invoice.close();
			}
			cout<<"\nPress enter to continue";
			system("pause > nul");
			break;
			
			case 4:
			cout<<"\n            INVOICE\n";
			cout<<"\nThe ticket was succesfuly bought\n";
			cout<<"\nMovie: "<<idk<<endl;
			cout<<"\nYour showtime is: 3 pm to 5 pm\n";
			cout<<"\nYour seat is: "<<seat<<"\n";
			cout<<"\nYour number of ticket is: "<<random<<endl<<endl;
			cout<<"\nDo you want to save your invoice?\n1.Yes\n2.No\n";cin>>save;
			system("cls");
		
			if(save == 1){
					cout<<"Type the name of your invoice: ";
					cin.ignore();
					getline(cin,printar);
					cout<<"\nYor ticket was save correctly\n\n";
				ofstream invoice((printar +".txt").c_str());
				
				invoice<<"\n            INVOICE\n";//save in system
			invoice<<"\nMovie: "<<idk<<endl;
			invoice<<"\nYour showtime is: 3 pm to 5 pm\n";
			invoice<<"\nYour seat is: "<<seat<<"\n";
			invoice<<"\nYour number of ticket is: "<<random<<endl<<endl;
			invoice.close();
			}
			cout<<"\nPress enter to continue";
			system("pause > nul");
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
	system("cls");
	cout<<"\nATRACADORE CINEMA"<<endl;
	cout<<"   COMING SOON \n \n";
	cout<<"\n1.Math are for crazy people \n2.Dune: Part Three \n3.la avalancha de los chamos 3 \n4.haitians attack again";
	cout<<"\n \nDo you want to book any coming soon movie? \n1.Yes \n2.No \n";cin>>goback;
	
	if(goback == 1){
		system("cls");
			cout<<"   COMING SOON \n ";
		cout<<"\n1.Math are for crazy people \n2.Dune: Part Three \n3.la avalancha de los chamos 3 \n4.haitians attack again\n";
		cout<<"\nWich one?\n";cin>>coming;
		switch(coming){
			case 1:
				idk = "Math are for crazy people--Coming soon";
				break;
			case 2:
				idk = "Dune: Part Three--Coming soon";
				break;
			case 3:
				idk = "la avalancha de los chamos 3--Coming soon";
				break;
			case 4:
				idk= "Haitians attack again--Coming soon";
				break;
				default:
					error();
					return 0;
		}
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
 system("cls");
 cout<<"\n     WATCHLIST\n";
 cout<<"\n1.Add";
 cout<<"\n2.See your list";
 cout<<"\n3.Delete from your list";
 cout<<"\n4.Exit\n";
 cin>>desicion;
 
 switch(desicion){
 	
 	case 1:{
 	
 		system("cls");
 		cout<<"\nWhat movie do you want to add? \n";
 		cout<<"\n1.Spider-Man:Brand New Day \n2.The Odyssey \n3.Moana \n4.El rompe creta \n5.Toy Story 5 \n6.exit \n \n";cin>>desicion2;
 		
 		switch(desicion2){
 			case 1:{
 			
 			
 				system("cls");
 				cout<<"\nYour movie was succesfully add\n";
 				cout<<"\nPress enter to go back to the menu\n";
 				system("pause > nul");
			 watch[slot] = "Spider-Man: Brand New Day";
			 
			 ofstream file("watchlist.txt", ios::app);
 	      		file<<watch[slot]<<endl;
 	      		file.close();
			 
 			slot++;
 			
 			break;
 		}
 			
 	       case 2:{
 	      
 	       
 	       	system("cls");
 	       	cout<<"\nYour movie was succesfully add\n";
 	       	cout<<"\nPress enter to go back to the menu\n";
 				system("pause > nul");
 	       	watch[slot] = "The Odyssey";
 	       	
 	       	ofstream file("watchlist.txt", ios::app);
 	      		file<<watch[slot]<<endl;
 	      		file.close();
 	       	
 	       	slot++;
 	       	break;
 	   }    	
 	       	
 	      case 3:{
 	      	
 	      
 	      	system("cls");
 	      	cout<<"\nYour movie was succesfully add\n";
 	      	cout<<"\nPress enter to go back to the menu\n";
 				system("pause > nul");
 	      	watch[slot] = "Moana";
 	      	
 	      	ofstream file("watchlist.txt", ios::app);
 	      		file<<watch[slot]<<endl;
 	      		file.close();
 	      	
 	      	slot++;
 	      	break;
 	      }
 	      	case 4: {
 	      		
 	      	
 	      	system("cls");
			   cout<<"\nYour movie was succesfully add\n";
			   cout<<"\nPress enter to go back to the menu\n";
 				system("pause > nul");
			   watch[slot] = "El rompe creta";
			   
			   ofstream file("watchlist.txt", ios::app);
 	      		file<<watch[slot]<<endl;
 	      		file.close();
			   
 	      	slot++;
 	      	break;
 	      }
 	      	
 	      	case 5: {
 	      		
 	      	
 	      	system("cls");
 	      	cout<<"\nYour movie was succesfully add\n";
 	      	cout<<"\nPress enter to go back to the menu\n";
 				system("pause > nul");
			watch[slot] = "Toy Story 5";
			
			ofstream file("watchlist.txt", ios::app);
 	      		file<<watch[slot]<<endl;
 	      		file.close();
			
 	      	slot++;
 	      	break;
 	      }
 	      	
 	      	
 	      	case 6:{
 	    
 	      	
 	      		return 0;
 	      	}
 	      	
 	      	default : {
 	      		error();
 	      	}
 	      		
 	      		
 			
 		}
 		break;
 	}
 		case 2:{
 			
 		int apoyo =0;
 			system("cls");
 		
 				
 			
 			ifstream show("watchlist.txt");
 			string aparece;
 			int i =1;
 			
 	       cout<<" WATCHLIST\n\n";
 			while(getline(show, aparece)){
        cout<< i<<"."<<aparece << endl;
        i++;
        apoyo++;
    }
    
	if(apoyo == 0){
 				cout<<"\n  WATCHLIST\n";
 				cout<<"\nYour list is empty\n\n";
 			}
 			
 			
 			
 			cout<<endl;
 			cout<<"Press enter to come back to the menu";
			 system("pause > nul");
			 
			
 		
 		break;
 	}
 		case 3:{
 		
 		
 		
 		
 	
        
 		ifstream show ("watchlist.txt");
 			string aparece;
 			int i =0;
 			int guia = 0;
 	       cout<<" WATCHLIST\n\n";
 			while(getline(show, aparece)){
 			watch[i] = aparece;
        cout<< i+1<<"."<<aparece << endl;
        i++;
        guia++;
    }
        	if(guia == 0){
        		system("cls");
        	cout<<"\nYour list is empty\n";
        	system("pause > nul");
        	break;
        }
        
        
        show.close();
        
        cout<<"\nWich one do you want to delete?\n";cin>>borralopa;
        ofstream kill("diesoon.txt");
        for(int j =0; j < i;j++){
        	if(j != borralopa -1){
        		kill<<watch[j]<<endl;
        	}
        }
    
       kill.close();
       
       remove("watchlist.txt");
       rename("diesoon.txt","watchlist.txt");
       
       system("cls");
       cout<<"\nThe movie was succefuly eliminate it\n";
       system("pause> nul");
 		break;
 	}
 		case 4:{
 			 return 0;
 			 break;
 		}
 }
}
}

int error(){
	cout<<"\nthats incorrect my friend,try it again and dont be dumb please\n\n";
	system("pause > nul");
	return 0;
}
