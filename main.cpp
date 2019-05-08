#include <iostream>
double mpg(double, double, double);



int main (){
	using namespace std;
	double unit = 0.26179, liter, mile;
	char again = 'Y';
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	do{
		
	cout << "Enter the number of liters of gasoline consumed and the miles traveled" << endl;
	cin >> liter >> mile;
	// mpg = mile / (liter * unit);
	cout << "Your car had done " << mpg (liter, mile, unit) << " miles per gallon." << endl;
	cout << "Do you want to try again? Y/n" << endl;
	cin >> again;
	} while (again == 'y' || again == 'Y');
	
	return 0;
}

double mpg (double liter, double mile, double unit){
	return mile / (liter * unit);
}