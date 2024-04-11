// Fixed on 4/11/24 By Branden Kozel

#include <iostream>
#include <iomanip>
using namespace std;

float average(float i1, float i2, float i3)
{
	return (i1 + i2 + i3) / 3.0; // Needs the parentheses to properly add the values
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	bool userInput;

	cout << "This program calculates the average of three numbers." << endl;

	do // Added loop to make it so the user can calculate multiple averages
	{
		cout << "\nFirst number: "; cin >> n1;
		cout << "Second number: "; cin >> n2;
		cout << "Third number: "; cin >> n3; // This was n2 before

		float a = average(n1, n2, n3);

		cout << setprecision(1) << fixed << "The average is " << a << endl
			 << "\nWould you like to caculate another average? (1 is yes and 0 is no) \nYour Response: "; cin >> userInput;


	} while (userInput == 1);

	

	return 0;
}