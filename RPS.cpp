#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
	srand(time(NULL));
	
	cout<< "Choose Rock or Paper or Scissors"<<endl;

	string me,pc;
	cin>>me;
	
	int pcr=rand()%3+1;
	

	if (me == "Rock"){
		cout<<"You picked Rock" << endl;
	}
	else if (me == "Paper"){
		cout<<"You picked Paper" << endl;
	}
	else if (me == "Scissors"){
		cout<<"You picked Scissors" << endl;
	}
	else {
		cout<<"try again" << endl;
		return 0;
	}
	
	if (pcr == 1){
		pc="Rock";
		cout<<"PC picked Rock" << endl;
	}
	else if (pcr == 2){
		pc="Paper";
		cout<<"PC picked Paper" << endl;
	}
	else if (pcr == 3){
		pc="Scissors";
		cout<<"PC picked Scissors" << endl;
	}
		if (pc==me){
		cout<<"draw"<<endl;
	}
	else if (me=="Rock"){
		if (pc=="Paper"){
			cout<<"you lose"<<endl;
		}
		else if (pc=="Scissors"){
			cout<<"you win"<<endl;
		}
		}
	else if (me=="Paper"){
		if (pc=="Rock"){
			cout<<"you win"<<endl;
		}
		else if (pc=="Scissors"){
			cout<<"you lose"<<endl;
		}
		}	
	else if (me=="Scissors"){
		if (pc=="Paper"){
			cout<<"you win"<<endl;
		}
		else if (pc=="Rock"){
			cout<<"you lose"<<endl;
		}
		}			

	}
	
