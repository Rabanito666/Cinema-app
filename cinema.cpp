#include <iostream>
#include <stdlib.h>

using namespace std;

int menu();
int nowplaying();
int buyticket();
int comingsoon();

int main(){

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
		cout<<"2.coming soon\n";
		cout<<"3.exit\n";cin>>menu;
		
		switch(menu){
			case 1: nowplaying();
			break;
			case 2:comingsoon();
			break;
			case 3:return 0;
		}
	}
	
	
	
}


int nowplaying(){
int movies;
int ask;
	for(;movies != 6;){
	
	
	cout<<"\nATRACADORE CINEMA"<<endl;
	cout<<"   CATALOG \n \n";
	cout<<" 1.Spider-Man: Brand New Day \n 2.The Odyssey  \n 3.Moana \n 4.El rompe creta \n 5.Toy Story 5 \n 6.exit \n \n";
	cout<<"Chose a movie to see the information: ";
	cin>>movies;
	
		switch(movies){
		
	case 1:cout<<"\nOVERVIEW \n Four years have passed since the events of No Way Home, and Peter is now an adult living entirely alone, having voluntarily erased himself from the lives and memories of those he loves. Crime-fighting in a New York that no longer knows his name, he’s devoted himself entirely to protecting his city — a full-time Spider-Man — but as the demands on him intensify, the pressure sparks a surprising physical evolution that threatens his existence, even as a strange new pattern of crimes gives rise to one of the most powerful threats he has ever faced. \n \n";
		buyticket();
		break;
		
		
	case 2:cout<< "\nOVERVIER \n Odysseus, the legendary Greek king of Ithaca, embarks on a long and perilous journey home following the Trojan War, chronicling his encounters with mythical beings such as the Cyclops Polyphemus, the Sirens, and the witch-goddess Circe, while attempting to reunite with his wife, Penelope.\n \n";
	buyticket();
		break;
		
	case 3:cout<<"\nOVERVIEW \n Prompted by a summons from the ocean, Moana departs her home island of Motunui for the first time and travels past its barrier reef. Accompanied by the demigod Maui, she undertakes a voyage aimed at recovering the well-being of her community.\n \n ";
	buyticket();
		break;
		
	case 4:cout<<"\nOVERVIEW \n why do you want to se that?????????? \n \n";
	buyticket();
		break;
		
	case 5:cout<<"\nOVERVIEW \n When Bonnie receives a Lilypad tablet as a gift and becomes obsessed, Buzz, Woody, Jessie and the rest of the gang's jobs become exponentially harder when they have to go head to head with the all-new threat to playtime. \n \n";
	     buyticket();
		break;
		
	case 6:return 0;
	
	case 7: default:;
	
	};

	
};
}

int buyticket(){
	int buy;
		cout<<"Movie price: 450 DOP ";
		cout<<"Do you want to buy it?\n1.Yes\n2.No \n";cin>>buy;
		if(buy== 1){
			cout<<"\nThe ticket was succesfuly bought\n";
		}else{
			return 0;
		}
	  
	
	
	
	return 0;
}

int comingsoon(){
	int goback;
	cout<<"\nATRACADORE CINEMA"<<endl;
	cout<<"   COMING SOON \n \n";
	cout<<"\n1.Math are for crazy people \n2.Dune: Part Three \n3.la avalancha de los chamos 3 \n4.haitians attack again";
	cout<<"\n \nDo you want to come back? \n1.Yes \n2.No \n";cin>>goback;
	
	if(goback == 1){
		return 0;
	}else{
		for(;goback != 1;){
			cout<<"Got it,take your time";
			cout<<"\n \nDo you want to come back? \n1.Yes \n2.No \n";cin>>goback;
		}
	}
	
return 0;
}
