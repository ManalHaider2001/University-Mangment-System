
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

                //teachers portal

class University{
private:
int choice;
public:
};
class MTS: protected University{
private:
public:

void write(){
int size;

cout<<" Enter Number Of students  MTS class  here "<<endl;
cin>>size;

int roll[size],LP[size],LR[size],MT[size],CAE[size],FT[size];
string name[size];
for(int i=0;i<size;i++){
cout<<" Enter Data of Student  "<<i+1<<"  In Following Sequence "<<endl;
cout<<"Name > Roll>  Lab performance > Lab reports > Midterm > CEA and  Final term "<<endl;
cin.ignore();
getline(cin,name[i]);
cin>>roll[i]>>LP[i]>>LR[i]>>MT[i]>>CAE[i]>>FT[i];
}
fstream fout;
fout.open("Reportcard_MTS_A.csv",ios::out);
for(int i=0;i<size;i++){
fout<<name[i]<<","<<roll[i]<<","<<LP[i]<<","<<LR[i]<<","<<MT[i]<<","<<CAE[i]<<","<<FT[i]<<endl;
}

}

};


class MTS_B: public University{
private:

public:

void write(){
int size;
cout<<" Enter Number Of < MTS_B > class students here "<<endl;
cin>>size;
int roll[size],LP[size],LR[size],MT[size],CAE[size],FT[size];
string name[size];

for(int i=0;i<size;i++){
cout<<" Enter Data of Student  "<<i+1<<"  In Following Sequence "<<endl;
cout<<"Name > Roll>  Lab performance > Lab reports > Midterm > CEA and  Final term "<<endl;
cin.ignore();
getline(cin,name[i]);
cin>>roll[i]>>LP[i]>>LR[i]>>MT[i]>>CAE[i]>>FT[i];
}
fstream fout;
fout.open("Reportcard_MTS_B.csv",ios::out);
for(int i=0;i<size;i++){
fout<<name[i]<<","<<roll[i]<<","<<LP[i]<<","<<LR[i]<<","<<MT[i]<<","<<CAE[i]<<","<<FT[i]<<endl;
}
}

};
class Bebme: public University{
private:

public:

void write(){
int size;
cout<<" Enter Number Of students of BEBME CLASS here "<<endl;
cin>>size;
int roll[size],LP[size],LR[size],MT[size],CAE[size],FT[size];
string name[size];

for(int i=0;i<size;i++){
cout<<" Enter Data of Student  "<<i+1<<"  In Following Sequence "<<endl;
cout<<"Name > Roll>  Lab performance > Lab reports > Midterm > CEA and  Final term "<<endl;
cin.ignore();
getline(cin,name[i]);
cin>>roll[i]>>LP[i]>>LR[i]>>MT[i]>>CAE[i]>>FT[i];
}

fstream fout;
fout.open("Reportcard_BEBME.csv",ios::out);
for(int i=0;i<size;i++){
fout<<name[i]<<","<<roll[i]<<","<<LP[i]<<","<<LR[i]<<","<<MT[i]<<","<<CAE[i]<<","<<FT[i]<<endl;
}
}
};
class BEEP: public University{
private:

public:

void write(){
int size;
cout<<" Enter Number Of students ogf BEEEP class here "<<endl;
cin>>size;

int roll[size],LP[size],LR[size],MT[size],CAE[size],FT[size];
string name[size];

for(int i=0;i<size;i++){
cout<<" Enter Data of Student  "<<i+1<<"  In Following Sequence "<<endl;
cout<<"Name > Roll>  Lab performance > Lab reports > Midterm > CEA and  Final term "<<endl;
cin.ignore();
getline(cin,name[i]);
cin>>roll[i]>>LP[i]>>LR[i]>>MT[i]>>CAE[i]>>FT[i];
}
fstream fout;
fout.open("Reportcard_BEEP.csv",ios::out);
for(int i=0;i<size;i++){
fout<<name[i]<<","<<roll[i]<<","<<LP[i]<<","<<LR[i]<<","<<MT[i]<<","<<CAE[i]<<","<<FT[i]<<endl;
}
}



};


                                //gaming zone

class tictactoe: public University {
public: 
	tictactoe();
	void displayBoard()const;
	void getMove(char player);
	void playGame();
	
private: 
	 static const int boardsize = 3; 
	 int maxMoves = 9; 
	 int minMovesToWin = 5; 
	char board[boardsize][boardsize]; 
	int totalMoves; 
	bool checkForWins(char player)const;
	bool checkForDraw()const;
	void fill_board();
	char togglePlayer(char player);
	
};

tictactoe::tictactoe(){
	cout<<endl;
	cout<<"***********TIC TAC TOE***********"<<endl;
	cout<<endl;
	totalMoves = 0;
	fill_board();
	}

void tictactoe::fill_board() {
	for (int row = 0; row < boardsize; row++) {
		for (int col = 0; col < boardsize;col++) {
			board[row][col] = ' ';
		}
	}
}
void tictactoe::displayBoard()const {

	cout << " --------------\n";
	for (int row = 0; row < boardsize; row++) {
		cout << " | ";
		for (int col = 0; col < boardsize; col++) {
			cout <<  board[row][col] << " | ";
		}
	
		cout << "\n --------------\n";
	}
}
void tictactoe::getMove(char player){
	string input; 
	char num; 
	int value, row, col, index; 
	
	while (true) {
		cout << player << " Select a number from 1-9: " << endl;
		getline(cin, input);

		if (input != "") {
		
			num = input.c_str()[0];
			if (num >= '1' && num <= '9') {
				
				value = num - '0';
				
				index = value - 1; 
				row = index / 3; 
				col = index % 3; 
				
				char boardposition = board[row][col];
				if (boardposition != 'X' && boardposition != 'O') {
		
					board[row][col] = player;
					totalMoves++;
					break; 
				}
				else
				
					cout << "Wrong move. Position is already taken. Try again" << endl;
			}
			else
				cout << "You must enter a number between 1-9 to make your move." 
				<< "Try again. \n";
		}
		else 
			cout << "You must enter something!!" << endl;
 }
	cout << "Total moves: " << this->totalMoves << endl;
}

char tictactoe::togglePlayer(char player) {
	
	player = player == 'X' ? 'O' : 'X';
	return (player);
}

bool tictactoe::checkForWins(char player)const{
	
	
	if (totalMoves >= minMovesToWin) {
		
		if (board[0][0] == player && board[0][1] == player && board[0][2] == player) {
			return true;
		}
		if (board[1][0] == player && board[1][1] == player && board[1][2] == player)
		{
			return true;
		}
		if (board[2][0] == player && board[2][1] == player && board[2][2] == player)
		{
			return true;
		}
		 
		if (board[0][0] == player && board[1][0] == player && board[2][0] == player)
		{
			return true;
		}
		if (board[0][1] == player && board[1][1] == player && board[2][1] == player)
		{
			return true;
		}
		if (board[0][2] == player && board[1][2] == player && board[2][2] == player)
		{
			return true;
		}
	
		if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
		{
			return true;
		}
		if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
		{
			return true;
		}

	}
	return false;

}

bool tictactoe::checkForDraw()const{
	return totalMoves == maxMoves;
}

void tictactoe::playGame(){
	char player = 'X'; 
	bool gameOver = false;

	do {
		displayBoard();
		getMove(player);
		if (checkForWins(player)) {
			cout << "\n *********** GAME ENDS!! ***********" << endl ;
			cout<<endl;
			cout <<"*********THE WINER IS  "<< player <<"*********"<<endl;
			gameOver = true;
		}
		else if (checkForDraw()) {
			cout << "IT'S A DRAW! Play again!" << endl;
			gameOver = true;
		}
		player = togglePlayer(player);
	} while (!gameOver);

	displayBoard();
}



                             //cafe

class Restuarant:public University{
private: 
    int opt;
public:
	void Menu(){
	cout<<"               \"WELCOME TO CAFE M-A-M MODE\""<<endl;
    cout<<endl;


    cout<<"          \"HERE IS THE MENU\"   "<<endl;
    cout<<endl;
	cout<<"1.     CHICKEN BIRYANI"<<"\t\t"<<"(Rs.200)"<<endl;
	cout<<"2.     CHICKEN PULAO"<<"\t\t"<<"(Rs.150)"<<endl;
	cout<<"3.    BEEF PULAO"<<"\t\t"<<"(Rs.250)"<<endl;
	cout<<"4.     MUTTON PULAO"<<"\t\t"<<"(Rs.170)"<<endl;
	cout<<"5.     MUTTON BIRYANI"<<"\t\t"<<"(Rs.220)"<<endl;
	cout<<"6.     BEEF BIRYANI"<<"\t\t"<<"(Rs.250)"<<endl;
	cout<<"7.     BOILED RICE"<<"\t\t"<<"(Rs.120)"<<endl;
	cout<<endl;
	cout<<"     \"DRINKS\""<<endl;
	cout<<"8.     COKE"<<"\t\t"<<"(Rs.170)"<<endl;
	cout<<"9.     PEPSI   "<<"\t\t"<<"(Rs.150)"<<endl;
	cout<<"10.    FANTA"<<"\t\t"<<"(Rs.130)"<<endl;
	cout<<"11.    DEW"<<"\t\t"<<"(Rs.160)"<<endl;
	cout<<"12.    LATTE"<<"\t\t"<<"(Rs.120)"<<endl;	
	cout<<endl;
	}
    void Order(){
    	char option;
	int CHICKENBIRYANI=200,CHICKENPULAO=150,BEEFPULAO=250,MUTTONPULAO=170,MUTTONBIRYANI=220,BEEFBIRYANI=250,BOILEDRICE=120;
    int COKE=170,PEPSI=150,FANTA=130,DEW=160,LATTE=120,Bill,TotalBill;
	Menu();
	cout<<"What would you want to order Sir?"<<endl;
	cout<<"Enter Item No: ";
	cin>>option;
	if (option == 1)
	{cout<<"Your order is taken"<<endl;
	Bill=200;}
	
	if (option == 2)
	{cout<<"Your order is taken"<<endl;
	Bill=CHICKENPULAO;}
	
	if (option == 3)
	{cout<<"Your order is taken"<<endl;
	Bill=BEEFPULAO;}

	if (option == 4)
	{cout<<"Your order is taken"<<endl;
	Bill=MUTTONPULAO;}
	
	if (option == 5)
	{cout<<"Your order is taken"<<endl;
	Bill=MUTTONBIRYANI;}
	
	if (option == 6)
	{cout<<"Your order is taken"<<endl;
	Bill=BEEFBIRYANI;}
	
	if (option == 7)
	{cout<<"Your order is taken"<<endl;
	Bill=BOILEDRICE;}
	
	if (option == 8)
	{cout<<"Your order is taken"<<endl;
	Bill=COKE;}

	if (option == 9)
	{cout<<"Your order is taken"<<endl;
	Bill=PEPSI;}

	if (option == 10)
	{cout<<"Your order is taken"<<endl;
	Bill=FANTA;}
	
	if (option == 11)
	{cout<<"Your order is taken"<<endl;
	Bill=DEW;}
	
	if (option == 12)
	{cout<<"Your order is taken"<<endl;
	Bill=LATTE; }
	
	TotalBill=Bill;
	
	cout<<"\"TOTAL BILL\": "<<TotalBill;
	cout<<endl;}
};


     
 
                                //main function


int main(){



int choice,area;
cout<<"                      ** WELCOME TO UNIVERSITY MANAGEMENT SYSTEM **       "<<endl<<endl;
cout<<"                        => To enter into techers portal press 1"<<endl<<endl;
cout<<"                        => To enter into CAFE portal press 2"<<endl<<endl;
cout<<"                        => To enter into Game Zone  press 3"<<endl<<endl;

cin>>area;
if(area==1){


cout<<"           **** Welcome TO Teacher's Portal ******"<<endl;
cout<<endl;
cout<<"                       Select Your Class    "<<endl<<endl;

cout<<"                   =>  To enter class MTS_A press '1' "<<endl;
cout<<"                   =>  To enter class MTS_B press '2' "<<endl;
cout<<"                   =>  To enter class BEBME press '3' "<<endl;
cout<<"                   =>  To enter class BEEP press  '4' "<<endl;
cin>>choice;
if(choice==1){

 MTS m1;
 m1.write();
 
}
else if(choice==2){
MTS_B p1;
p1.write();
}
else if(choice==3){
Bebme p1;
p1.write();
}
else if(choice==4){
BEEP p1;
p1.write();
}

}
else if(area==2){
Restuarant r1;

r1.Order();	
}
else if (area==3){
	tictactoe game;
	game.playGame();
}
};
