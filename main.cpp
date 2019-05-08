#include <iostream>

using namespace std;

int main (){
	
	int liter, mile, mpg;
	double unit = 0.26179;
	char again = 'Y';
	do{
		
	cout << "Enter the number of liters of gasoline consumed and the miles traveled" << endl;
	cin >> liter >> mile;
	mpg = mile / (liter * unit);
	cout << "Your car had done " << mpg << " miles per gallon." << endl;
	cout << "Do you want to try again? Y/n" << endl;
	cin >> again;
	} while (again == 'y' || again == 'Y');
	
	return 0;
}

