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

	}
	