#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float totalShopsBill = 0.0;

// Structure to represent a Book
struct Book {
    string title;
    string author;
    float price;  
    string link;  
};

// Function for converting string into numbers
bool isNumber(const string& str);


// Function to print "WELCOME TO MARKET" with Unicode box-drawing characters
void printWelcomeToMarket();

void chooseShop();

float garment();

float bakery();

void bookStore();

// Function to display types of wear
void showTypeOfWear() {
    cout << "\nWhat type of wear are you looking for?" << endl;
    cout << "1. Party Wear" << endl;
    cout << "2. Casual Wear" << endl;
    cout << "3. Sports Wear" << endl<<endl;
    cout << "Choose 0 for returning back from choice of wears. " << endl;
//    int wearChoice;
//    cout << "Enter your choice : ";
//    cin >> wearChoice;
    
}

// Function to display the final summary and farewell message
void displaySummary(double sum) {
	totalShopsBill += sum;
    cout << "\nThank you for visiting our Garment Shop!" << endl;
    cout << "We hope you enjoyed your shopping experience." << endl;
    cout << "Your total amount to be paid: Rs"  << sum << endl;
    cout << "We look forward to your next visit. Goodbye!" << endl<<endl;
}

int main(){
	printWelcomeToMarket();
	
	chooseShop();
	cout<<endl<<endl<<"\nYOUR TOTAL BILL FROM THE MARKET IS "<<totalShopsBill;
	return 0;
}

// Function to print "WELCOME TO MARKET" with Unicode box-drawing characters
void printWelcomeToMarket() {
    // Each letter is represented using block characters and other Unicode symbols
    cout << "¦¦      ¦¦  ¦¦¦¦¦¦¦¦  ¦¦       ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦   ¦¦¦    ¦¦¦  ¦¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦  \n";
    cout << "¦¦      ¦¦  ¦¦        ¦¦       ¦¦         ¦¦     ¦¦   ¦¦ ¦¦¦¦ ¦¦  ¦¦               ¦¦     ¦¦     ¦¦        \n";
    cout << "¦¦  ¦¦  ¦¦  ¦¦¦¦¦¦¦   ¦¦       ¦¦         ¦¦     ¦¦   ¦¦  ¦¦  ¦¦  ¦¦¦¦¦¦¦          ¦¦     ¦¦     ¦¦   \n";
    cout << "¦¦ ¦¦¦¦ ¦¦  ¦¦        ¦¦       ¦¦         ¦¦     ¦¦   ¦¦      ¦¦  ¦¦               ¦¦     ¦¦     ¦¦        \n";
    cout << "¦¦¦    ¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦   ¦¦      ¦¦  ¦¦¦¦¦¦¦¦         ¦¦     ¦¦¦¦¦¦¦¦¦  \n";
    cout << "\n";
    cout << "¦¦¦    ¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦   ¦¦   ¦¦¦  ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦    \n";
    cout << "¦¦ ¦¦¦¦ ¦¦  ¦¦    ¦¦  ¦¦   ¦¦¦   ¦¦ ¦¦     ¦¦           ¦¦          \n";
    cout << "¦¦  ¦¦  ¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦   ¦¦¦       ¦¦¦¦¦¦¦      ¦¦        \n";
    cout << "¦¦      ¦¦  ¦¦    ¦¦  ¦¦    ¦¦   ¦¦ ¦¦     ¦¦           ¦¦        \n";
    cout << "¦¦      ¦¦  ¦¦    ¦¦  ¦¦    ¦¦   ¦¦   ¦¦¦  ¦¦¦¦¦¦¦¦     ¦¦      \n";
}

void chooseShop(){
	int chooseShop;
	cout<<"Which type of shopping you want to do?"<<endl;
	do{
		cout<<"1 for Garment shop "<<endl;
		cout<<"2 for Bakery shop "<<endl;
		cout<<"3 for Bookstore shop "<<endl;
		cout<<"0 for Your total bill "<<endl;
		cin>>chooseShop;
		
		if(!(chooseShop >= 0 && chooseShop < 4)){
			do{
				cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
				cin>>chooseShop;
			}while(!(chooseShop >= 0 && chooseShop < 4));
		}
		switch(chooseShop){
		
		case 1:{
			garment();
			break;
		}
			
		case 2:{
			bakery();
			break;	  
		}
		
		case 3:{
			bookStore();
			break;
		}
		
			}
	}while(chooseShop != 0);
}
float garment(){
	int choice;
	int sum = 0;
	
	do{
		cout << "\nWhat type of clothes are you looking for?" << endl;
        cout << "1. Ladies" << endl;
        cout << "2. Gents" << endl;
        cout << "3. Children" << endl;
        cout<<"\nChoose 0 for returning out from Garments. "<<endl;
		cout<<"choice: ";		cin>>choice;
		
		if(!(choice >= 0 && choice < 4)){
			do{
				cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
				cin>>choice;
			}while(!(choice >= 0 && choice < 4));
		}

		
		switch(choice){
			case 1:
			
			       // Ask for type of wear preference
                   showTypeOfWear();
                   
                   int wearChoice;
                   cout << "Enter your choice : ";
                   cin >> wearChoice;
                   
                    if(!(wearChoice >= 0 && wearChoice <= 3)){
						do{
							cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
							cin>>wearChoice;
						}while(!(wearChoice >= 0 && wearChoice <= 3));
					}
                   
                   switch(wearChoice){
                   	case 1:{
					
                   		cout<<"\nYou have chosen our party wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string partywearForWomen[10] = {"Velvet Suits" , "Embroidered Shawl Dresses" , "Anarkali Suits" , "Pishwas", "Kurtas with Heavy Dupatta","Long Coat Dresses", "Kaftan-Style Dresses","Lehenga Choli Sets","Tunics with Palazzo Pants","Jumpsuits with Traditional Embellishments"};
                   		int pricePerSuit[10] = { 12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 , 12000 , 12000};
                   		int partywearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<partywearForWomen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears: "<<endl;
				           cout<<"Choose number party wear for women suit: ";		
						   cin>>partywearChoice;
			               cout<<endl;
			               
							  if(!(partywearChoice >= 0 && partywearChoice <= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>partywearChoice;
								}while(!(partywearChoice >= 0 && partywearChoice <= 10));
							}
		
			               if(partywearChoice > 0 && partywearChoice<= 10){
					           sum += pricePerSuit[partywearChoice-1];
					           cout<<"RS: "<<pricePerSuit[partywearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(partywearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n\n "<<endl;	}
					
			         	}while(partywearChoice != 0); 												  
			           
					    break;}
						   
					 case 2:{
					
                   		cout<<"\nYou have chosen our casual wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string casualwearForWomen[10] = {"Knit Sweaters" , "Woolen Tunics" , "Layered Kurtis" , "Denim Jackets" , "Sweater Dresses" , "Fleece Leggings" , "Maxi Dresses" , "Sweatshirts" , "Puffer Jackets" , "Knit Scarves"};
                   		int pricePerSuit[10] = { 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000  };
                   		int casualwearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<casualwearForWomen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number casual wear for women suit: ";		
						   cin>>casualwearChoice;
			               cout<<endl;
			               
			               if(!(casualwearChoice >= 0 && casualwearChoice <= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>casualwearChoice;
								}while(!(casualwearChoice >= 0 && casualwearChoice <= 10));
							}
			               if(casualwearChoice > 0 && casualwearChoice<= 10){
					           sum += pricePerSuit[casualwearChoice-1];
					           cout<<"RS: "<<pricePerSuit[casualwearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(casualwearChoice != 0){
					            cout<<"\n\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(casualwearChoice != 0); 												 
			            break;}
					
					
						   
					case 3:{
					
                   		cout<<"\nYou have chosen our sports wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string sportswearForWomen[10] = {"Thermal Leggings", "Long-Sleeve Performance Tops", "Fleece Hoodies", "Padded Jackets", "Sweatpants", "Compression Tights", "Winter Running Shoes", "Windbreakers", "Base Layer Shirts", "Cold-Weather Sports Gloves"};
                   		int pricePerSuit[10] = { 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 };
                   		int sportswearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<sportswearForWomen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number sports wear for women suit: ";		
						   cin>>sportswearChoice;
			               cout<<endl;
			               if(!(sportswearChoice >= 0 && sportswearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>sportswearChoice;
								}while(!(sportswearChoice >= 0 && sportswearChoice<= 10));
							}
			               if(sportswearChoice > 0 && sportswearChoice<= 10){
					           sum += pricePerSuit[sportswearChoice-1];
					           cout<<"RS: "<<pricePerSuit[sportswearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(sportswearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(sportswearChoice != 0); 												  // case 1 ends here
			            break;}
					
						}
			case 2:
			
			       // Ask for type of wear preference
                   showTypeOfWear();
                   
//                   int wearChoice;
                   cout << "Enter your choice : ";
                   cin >> wearChoice;
                   
                   switch(wearChoice){          
			        case 1:{
					
                   		cout<<"\nYou have chosen our party wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string partywearForMen[10] = {"Sherwani", "Kurta-Pajama", "Three-Piece Suit", "Blazer with Trousers", "Nehru Jacket", "Pathani Suit", "Embroidered Waistcoat", "Tuxedo", "Dress Shirt with Chinos", "Jacket with Formal Pants"};
                   		int pricePerSuit[10] = { 12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 , 12000 , 12000};
                   		int partywearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<partywearForMen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number party wear for men suit: ";		
						   cin>>partywearChoice;
			               cout<<endl;
			               
			               if(!(partywearChoice >= 0 && partywearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>partywearChoice;
								}while(!(partywearChoice >= 0 && partywearChoice<= 10));
							}
			               
			               if(partywearChoice > 0 && partywearChoice<= 10){
					           sum += pricePerSuit[partywearChoice-1];
					           cout<<"RS: "<<pricePerSuit[partywearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(partywearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(partywearChoice != 0); 												 
			            break;}
						   
					case 2:{
						
                   		cout<<"\nYou have chosen our casual wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string casualwearForMen[10] = {"T-Shirts", "Jeans", "Polo Shirts", "Chinos", "Casual Shirts", "Sweatshirts", "Knitwear", "Linen Pants", "Denim Jackets", "Shorts"};
                   		int pricePerSuit[10] = { 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000  };
                   		int casualwearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<casualwearForMen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number casual wear for men suit: ";		
						   cin>>casualwearChoice;
			               cout<<endl;
			               
			                if(!(casualwearChoice >= 0 && casualwearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>casualwearChoice;
								}while(!(casualwearChoice >= 0 && casualwearChoice<= 10));
							}
			               if(casualwearChoice > 0 && casualwearChoice<= 10){
					           sum += pricePerSuit[casualwearChoice-1];
					           cout<<"RS: "<<pricePerSuit[casualwearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(casualwearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(casualwearChoice != 0); 												  // case 1 ends here
			            break;}
						 
					
						   
					case 3:{
					
                   		cout<<"\nYou have chosen our sports wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string sportswearForMen[10] = {"Thermal Leggings", "Long-Sleeve Compression Tops", "Fleece Hoodies", "Padded Sports Jackets", "Sweatpants", "Winter Running Shoes", "Windbreakers", "Base Layer Shirts", "Track Suits", "Cold-Weather Sports Gloves"};
                   		int pricePerSuit[10] = { 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 };
                   		int sportswearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<sportswearForMen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number sports wear for men suit: ";		
						   cin>>sportswearChoice;
			               cout<<endl;
			               
			               if(!(sportswearChoice >= 0 && sportswearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>sportswearChoice;
								}while(!(sportswearChoice >= 0 && sportswearChoice<= 10));
							}
			               if(sportswearChoice > 0 && sportswearChoice<= 10){
					           sum += pricePerSuit[sportswearChoice-1];
					           cout<<"RS: "<<pricePerSuit[sportswearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(sportswearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(sportswearChoice != 0); 												  // case 2 ends here
			            break;}
					default:
					    continue;	
						}
						
			case 3:
				
			       // Ask for type of wear preference
                   showTypeOfWear();
                   
//                   int wearChoice;
                   cout << "Enter your choice : ";
                   cin >> wearChoice;
                   
                   switch(wearChoice){			
		           	case 1:{
					
                   		cout<<"\nYou have chosen our party wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string partywearForChildren[10] = {"Embroidered Kurtas", "Velvet Suits", "Sweater Dresses", "Dress Shirts with Trousers", "Puff Sleeve Dresses", "Jackets with Tights", "Sweater Sets", "Three-Piece Suits", "Fleece-Lined Tunics", "Cardigan Dresses"};
                   		int pricePerSuit[10] = { 12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 , 12000 , 12000};
                   		int partywearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<partywearForChildren[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number party wear for children suit: ";		
						   cin>>partywearChoice;
			               cout<<endl;
			               if(!(partywearChoice >= 0 && partywearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>partywearChoice;
								}while(!(partywearChoice >= 0 && partywearChoice<= 10));
							}
			               if(partywearChoice > 0 && partywearChoice<= 10){
					           sum += pricePerSuit[partywearChoice-1];
					           cout<<"RS: "<<pricePerSuit[partywearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(partywearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(partywearChoice != 0); 												  // case 1 ends here
			            break;}
						   
					case 2:{
					
                   		cout<<"\nYou have chosen our casual wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string casualwearForChildren[10] = {"Fleece Jackets", "Sweater Sets", "Thermal Tops", "Jeans with Hoodies", "Knitted Cardigans", "Long-Sleeve T-Shirts", "Woolen Leggings", "Casual Dresses", "Puffer Jackets", "Track Suits"};
                   		int pricePerSuit[10] = { 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000  };
                   		int casualwearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<casualwearForChildren[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number casual wear for Children suit: ";		
						   cin>>casualwearChoice;
			               cout<<endl;
			               
			               if(!(casualwearChoice >= 0 && casualwearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>casualwearChoice;
								}while(!(casualwearChoice >= 0 && casualwearChoice<= 10));
							}
			               if(casualwearChoice > 0 && casualwearChoice< 11){
					           sum += pricePerSuit[casualwearChoice-1];
					           cout<<"RS: "<<pricePerSuit[casualwearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl<<endl;
				          }
				           else if(casualwearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(casualwearChoice != 0); 	
						 											  // case 1 ends here
			            break;	}
						 
					
						   
					case 3:{
					
                   		cout<<"\nYou have chosen our sports wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string sportswearForChildren[10] = {"Thermal Leggings", "Fleece Hoodies", "Long-Sleeve T-Shirts", "Track Suits", "Sweatpants", "Winter Running Shoes", "Padded Jackets", "Base Layer Shirts", "Windbreakers", "Beanies"};
                   		int pricePerSuit[10] = { 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 };
                   		int sportswearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<sportswearForChildren[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number sports wear for Children suit: ";		
						   cin>>sportswearChoice;
			               cout<<endl;
			               if(!(sportswearChoice >= 0 && sportswearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>sportswearChoice;
								}while(!(sportswearChoice >= 0 && sportswearChoice<= 10));
							}
			               if(sportswearChoice > 0 && sportswearChoice< 11){
					           sum += pricePerSuit[sportswearChoice-1];
					           cout<<"RS: "<<pricePerSuit[sportswearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(sportswearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(sportswearChoice != 0); 	
						 											  // case 3 ends here
			            }	
							}      
				   }
		
	}while(choice != 0);
	cout<< endl << endl << endl;
	displaySummary( sum);
	
}









float bakery(){
		cout<<setw(35)<<"Welcome to the 'BACKED 2 PERFECTION' Bakery"<<endl;
	int choice;
	int sum=0;
	do{
		cout<<"What do you want from our availabes: "<<endl<<endl;
		cout<<"Choose 1 for BISCUITS: "<<endl;
		cout<<"Choose 2 for SNACKS: "<<endl;
		cout<<"Choose 3 for CAKES: "<<endl;
		cout<<"Choose 4 for DRINKS: "<<endl<<endl;
		cout<<"Choose 0 for returning out from the bakary. "<<endl;
		cout<<"choice: ";		cin>>choice;
		
		if(!((choice >= 0) && (choice <= 4))){
			do{
			cout<<"    INVALID CHOICE "<<endl;
			cout<<"PLEASE ENTER FROM GIVEN ";
			cin >> choice;
			
			}while( !((choice >= 0) && (choice <= 4)) );
		}
	//	int choiceInt == choice;
		cout<<endl;
		switch (choice){
		case 1:{
			cout<<"Which biscuits do you want "<<endl;
			cout<<setw(20)<<"CHOOSE BISCUITS: "<<endl;
			
			string	biscuits[5] = {"Prince","Super","OREO","TUC","Gala"};
			int	biscuitsPrice[5] = {30,20,20,40,30};
			int biscuitsChoice , biscuitsCount = 0 ;
			do {
				for(int i = 0; i < 5; ++i ){
					cout<<i+1 <<" for "<<biscuits[i] <<" Price: " <<biscuitsPrice[i]<<endl;
				}
				cout<<"\n0 for returning to bakary menu. "<<endl;
				cout<<"Choose biscuits no: ";		cin>>biscuitsChoice;
				cout<<endl;
				if(biscuitsChoice > 0 && biscuitsChoice < 6){
					biscuitsCount++;
					sum += biscuitsPrice[biscuitsChoice-1];
					cout<<"Rs: "<<biscuitsPrice[biscuitsChoice-1]<<" added to your bill, your current bill is "<<sum<<endl;
				}
				else if(biscuitsChoice != 0){
					cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE: "<<endl<<endl;	}
				
				}while(biscuitsChoice != 0); 												 
			break;}											 // case 1 ends here
			
		case 2:{
			cout<<"Which snacks you want "<<endl;
			cout<<setw(20)<<"CHOOSE SNACKS: "<<endl;
			string snacks[6] = {"Vegetable Roll","Chicken Roll","Sandwich","Smosa","Shwarma","Pizza slice"};
			int snacksPrice[6] = {40,130,120,30,160,200};
			int snacksChoice;
			do{
				for(int j=0; j<6; ++j){
					cout<<j+1 <<" for "<<snacks[j] <<" price: " <<snacksPrice[j] <<endl;
				}
				cout<<"\n0 for returning to bakary menu. "<<endl;
				cout<<"Snack no: ";		cin>>snacksChoice;
				
				if(snacksChoice > 0 && snacksChoice < 7){
					sum += snacksPrice[snacksChoice - 1];
					cout<<"Rs: "<<snacksPrice[snacksChoice-1]<<" added to your bill, your current bill is "<<sum<<endl;
				}
				else if(snacksChoice != 0){
					cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE: "<<endl;	}
				cout<<endl;					
				}while(snacksChoice != 0);
			break; 
		}												// 			case 2 ends here.
			
		case 3:{
			cout<<"Which cake you want "<<endl;
			cout<<setw(20)<<"CHOOSE CAKE: "<<endl;
			string cakes[4] = {"Chocolate cake","Vanilla cake","Friut cake","Cheese cake"};
			int cakesPrice [4] = {600,400,300,700};
			int cakesChoice;
			do{
				for(int k=0; k<4; ++k){
					cout<<k+1<<" for "<<cakes[k] <<" Price: "<<cakesPrice[k] <<endl;
				}
				cout<<"\n0 for returning to bakery menu. "<<endl;
				cout<<"Cake no: ";		cin>>cakesChoice;
			
				if(cakesChoice > 0 && cakesChoice < 5){
					sum += cakesPrice[cakesChoice - 1];
					cout<<"Rs: "<<cakesPrice[cakesChoice -1 ]<<" added to your bill, your current bill is "<<sum<<endl;
				}
				else if(cakesChoice != 0){
					cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE: "<<endl;	}
				cout<<endl;	
				}while(cakesChoice != 0);
			break;
		} // case 3 ending
		
		case 4:{
			cout<<"Which bottle you want "<<endl;
			cout<<setw(20)<<"CHOOSE BOTTLE: "<<endl;
			string bottles[7] = {"Mineral Water","Fizzup","Cola Next","7up","Pakola","String","Pepsi"};
			int bottlesPrice[7] = {50,70,70,80,160,120,90};
			int bottlesChoice;
			do{
				for(int l=0; l < 7; ++l){
					cout<<l+1<<" for " <<bottles[l]<<" price "<<bottlesPrice[l]<<endl;
				}
				cout<<"\n0 for returning to bakery menu. "<<endl;
				cout<<"Bottle choice ";			cin>>bottlesChoice;
				if(bottlesChoice > 0 && bottlesChoice < 8){
					sum += bottlesPrice[bottlesChoice - 1 ];
					cout<<"Rs: "<<bottlesPrice[bottlesChoice - 1]<<" added to your bill, your current bill is "<<sum<<endl;
				}
				else if(bottlesChoice != 0){
					cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE: "<<endl;	}
					cout<<endl;
			}while(bottlesChoice != 0);			
			break;
		}
		
		
		
		}	// 1st switch case ending....
	}while(choice != 0);
	cout<<endl<<endl<<endl;
	totalShopsBill += sum;
	cout<<"Your total bill from bakray is: "<<sum<<endl<<endl<<endl;
	
			
}





bool isNumber(const string& str) {
    for (char c : str) {
        if (c < '0' || c > '9') {
            return false;  // Found a non-digit, return false
        }
    }
    return true;  // All characters are digits, return true
}





void bookStore() {
    // Create book arrays for each category
    Book mathematicsBooks[10] = {
        {"Calculus: Early Transcendentals", "James Stewart", 27075.00, "https://example.com/calculus"},
        {"Linear Algebra Done Right", "Sheldon Axler", 22230.00, "https://example.com/linear-algebra"},
        {"Introduction to Probability", "Joseph K. Blitzstein", 19950.00, "https://example.com/probability"},
        {"Discrete Mathematics and Its Applications", "Kenneth H. Rosen", 24225.00, "https://example.com/discrete-maths"},
        {"Mathematics: Its Content, Methods and Meaning", "A.D. Aleksandrov", 28115.00, "https://example.com/maths-content"},
        {"Principles of Mathematical Analysis", "Walter Rudin", 18525.00, "https://example.com/analysis"},
        {"Introduction to the Theory of Computation", "Michael Sipser", 17955.00, "https://example.com/computation-theory"},
        {"Real Analysis: Modern Techniques and Their Applications", "Gerald B. Folland", 31350.00, "https://example.com/real-analysis"},
        {"Abstract Algebra", "David S. Dummit", 30780.00, "https://example.com/abstract-algebra"},
        {"Topology", "James Munkres", 26160.00, "https://example.com/topology"}
    };

    Book englishBooks[10] = {
        {"Pride and Prejudice", "Jane Austen", 4556.15, "https://example.com/pride-and-prejudice"},
        {"1984", "George Orwell", 3986.15, "https://example.com/1984"},
        {"To Kill a Mockingbird", "Harper Lee", 5401.15, "https://example.com/mockingbird"},
        {"The Great Gatsby", "F. Scott Fitzgerald", 4271.15, "https://example.com/gatsby"},
        {"Moby Dick", "Herman Melville", 4831.15, "https://example.com/moby-dick"},
        {"War and Peace", "Leo Tolstoy", 5691.15, "https://example.com/war-and-peace"},
        {"The Odyssey", "Homer", 3691.15, "https://example.com/odyssey"},
        {"The Catcher in the Rye", "J.D. Salinger", 3131.15, "https://example.com/catcher-in-the-rye"},
        {"The Divine Comedy", "Dante Alighieri", 6541.15, "https://example.com/divine-comedy"},
        {"Crime and Punishment", "Fyodor Dostoevsky", 5121.15, "https://example.com/crime-and-punishment"}
    };

    Book programmingBooks[10] = {
        {"C++ Primer", "Stanley B. Lippman", 15775.00, "https://example.com/cpp-primer"},
        {"Clean Code", "Robert C. Martin", 14245.15, "https://example.com/clean-code"},
        {"The Pragmatic Programmer", "Andrew Hunt", 13010.00, "https://example.com/pragmatic-programmer"},
        {"Introduction to Algorithms", "Thomas H. Cormen", 19380.00, "https://example.com/algorithms"},
        {"Effective Java", "Joshua Bloch", 14250.00, "https://example.com/effective-java"},
        {"Design Patterns: Elements of Reusable Object-Oriented Software", "Erich Gamma", 17100.00, "https://example.com/design-patterns"},
        {"Head First Java", "Kathy Sierra", 13395.00, "https://example.com/head-first-java"},
        {"Python Crash Course", "Eric Matthes", 11396.15, "https://example.com/python-crash-course"},
        {"JavaScript: The Good Parts", "Douglas Crockford", 8546.15, "https://example.com/js-good-parts"},
        {"The Art of Computer Programming", "Donald E. Knuth", 37050.00, "https://example.com/computer-programming"}
    };

    float bookPrice = 0.0;
    string userChoice;
    string selectedBooks[50];
    float selectedBookPrices[50];
    int selectedCount = 0;

    cout << "Welcome to our bookstore!" << endl;
    cout << "Would you like to buy something? (yes/no): ";
    cin >> userChoice;

    // Validate 'yes' or 'no'
    while (userChoice != "yes" && userChoice != "no" && userChoice != "Yes" && userChoice != "No") {
        cout << "Invalid input. Please enter 'yes' or 'no': ";
        cin >> userChoice;
    }

    // Main loop for buying books
    while (userChoice == "yes" || userChoice == "Yes") {
        int categoryChoice;
        Book* selectedCategory = nullptr;
        int totalBooksInCategory = 0;

        // Show categories
        cout << "We have the following categories available:" << endl;
        cout << "1. Mathematics" << endl;
        cout << "2. English" << endl;
        cout << "3. Programming" << endl;

        // Ask for category input and validate
        cout << "Enter a number between 1 and 3: ";
        string input;
        cin.ignore(); // Clear the input buffer before getline
        while (true) {
            getline(cin, input);  // Read the whole line as a string
            if (isNumber(input)) {
                categoryChoice = stoi(input);
                if (categoryChoice >= 1 && categoryChoice <= 3) {
                    break;
                } else {
                    cout << "Invalid input. Please enter a number between 1 and 3: ";
                }
            } else {
                cout << "Invalid input. Please enter a valid number between 1 and 3: ";
            }
        }

        // Select category
        if (categoryChoice == 1) {
            selectedCategory = mathematicsBooks;
            totalBooksInCategory = 10;
            cout << "You selected Mathematics Books." << endl;
        } else if (categoryChoice == 2) {
            selectedCategory = englishBooks;
            totalBooksInCategory = 10;
            cout << "You selected English Books." << endl;
        } else if (categoryChoice == 3) {
            selectedCategory = programmingBooks;
            totalBooksInCategory = 10;
            cout << "You selected Programming Books." << endl;
        }

        // Display books in the selected category
        for (int i = 0; i < totalBooksInCategory; i++) {
            cout << "Book #" << (i + 1) << ": " << endl;
            cout << "Title: " << selectedCategory[i].title << endl;
            cout << "Author: " << selectedCategory[i].author << endl;
            cout << "Price: PKR " << selectedCategory[i].price << endl;
            cout << "Link: " << selectedCategory[i].link << endl;
            cout << "--------------------------" << endl;
        }

        // Ask for the book selection
        int bookChoice;
        bool validChoice = false;
        while (!validChoice) {
            cout << "Enter the number of the book you want to buy (1-10): ";
            string bookInput;
            cin >> bookInput;

            // Check if the input is a valid number
            if (isNumber(bookInput)) {
                bookChoice = stoi(bookInput);
                if (bookChoice >= 1 && bookChoice <= 10) {
                    validChoice = true;
                } else {
                    cout << "Invalid number. Please enter a number between 1 and 10." << endl;
                }
            } else {
                cout << "Invalid input. Please enter a number between 1 and 10." << endl;
            }
        }

        // Select the book and update the total price
        Book selectedBook = selectedCategory[bookChoice - 1];
        bookPrice += selectedBook.price;

        // Store the selected book's name and price
        selectedBooks[selectedCount] = selectedBook.title;
        selectedBookPrices[selectedCount] = selectedBook.price;
        selectedCount++;

        cout << "You have selected: " << selectedBook.title << " for PKR " << selectedBook.price << endl;
        cout << "Do you want to continue shopping? (yes/no): ";
        cin >> userChoice;

        // Validate 'yes' or 'no'
        while (userChoice != "yes" && userChoice != "no" && userChoice != "Yes" && userChoice != "No") {
            cout << "Invalid input. Please enter 'yes' or 'no': ";
            cin >> userChoice;
        }
    }

    // Print the books the user bought
    cout << "\nYou have purchased the following books:" << endl;
    for (int i = 0; i < selectedCount; i++) {
        cout << selectedBooks[i] << " - PKR " << selectedBookPrices[i] << endl;
    }
	totalShopsBill += bookPrice;
    //cout << "\nThank you for shopping with us!" << endl;
    cout << "From book store your final amount: PKR " << bookPrice << endl<<endl;
}

