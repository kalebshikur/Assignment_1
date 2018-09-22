#include <iostream>
#include <string>

using namespace std;
int main() {
	int amount;
	int i, j = 0;
	int bills[]{ 50,20,10,5,1 }; // creates array for the bills the atm can withdraw
	int withDraw;
	char entry;
	do // this loop is used to give the users multiple chance to withdraw
	{
		while (true) // This loop checks if the user is entering a valid input
		{
			cout << "Enter withdrawal amount: " << endl;
			cin >> amount;
	// check the top limit of the entry
			if (amount > 300) { 
				cout << " Sorry the maximum amount you can withdral is $300" << endl;
			}
	// check the bottom limit of the entry
			else if (amount < 1) {
				cout << " Sorry the minimum amount you can withdraw if $1" << endl;
			}
			else

	// this loops count the amount of bills withdrawn
			{
	/* the loops subtracts the largest bill that is smaller than the amount entered 
	until the amount goes to zero or the amount is smaller than the bill and it will
	go down to the next smaller bill */
				for (i = 0; i < 5; i++)
				{
					j = 0;
					if (amount >= bills[i]) {
						do
						{
							amount = amount - bills[i];
							j++;
						} while (amount >= bills[i]);
						cout << j << " $" << bills[i] << " bill" << endl;
					}
				}
	// Ask if the user wants to enter another withdrawal
				cout << "Another withdrawal?  please enter y to continue" << endl;
				cin >> entry;
				break;
			}
		}
	} while (entry == 'y');
}
