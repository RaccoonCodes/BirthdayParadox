#include<iostream>
#include<limits>
#include <iomanip>

using namespace std;

int main() {
	int total_people = 0;
	double product = 1;
	double results = 0;
	cout << "\t\t---- Birthday Paradox ----"<< endl;
	cout << "Enter how many people are in a group: ";
	cin >> total_people;

	
	while (total_people == 1 ||cin.fail() || total_people < 0) {
		if (cin.fail()) {
			cout << "Please enter a number: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}

		else{
			cout << "You can't have a group less than two, try again ";
		}

		cin >> total_people;
	}

	 if (total_people >= 98) {
		results = 100;
	 }
	 
	 else{
		for (int i = 1; i <= total_people; i++) {
			product *= 1 - (i / static_cast<double>(365));
		}
		results = (1 - product) * 100;
	}
	
	//cout << "final product result " << product << endl;
	cout << fixed <<setprecision(2)<< "\nIn a group of "<< total_people << 
		", the probability of two people sharing the same birthday is " << results<<"%"<<endl;

}