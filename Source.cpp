// Hovhannes Margaryan

/* Pseudocode

   * Create variables >> int dice = 0, rolls = 0, num1s = 0, num2s = 0, num3s = 0, num4s = 0, num5s = 0, num6s = 0;
   * do
        Display "Please enter in number of rolls:";
        Ask rolls
		if rolls < 1
		   Display "Please enter rolls > 1";
     while rolls < 1

    * Display "DICE ROLL STATISTICS";
	* Display "# Rolled          # Times         % Times"
	* Display "--------          -------         -------"

	* For count = 1; count <= rolls; count = count + 1
	    dice = random numbers 1 to 6
	      Switch on dice
		        Match 1: dice = 1
				          num1s += 1
				Match 2: dice = 1
						  num2s += 1
				Match 3: dice = 1
						  num3s += 1
				Match 4: dice = 1
						  num4s += 1
				Match 5: dice = 1
						  num5s += 1
				Match 6: dice = 1
						  num6s += 1

     * Display       1                 num1s          ((double)num1s * 100) / rolls%

       Display       2                 num2s          ((double)num1s * 100) / rolls%

       Display       3                 num3s          ((double)num1s * 100) / rolls%
	          
       Display       4                 num4s          ((double)num1s * 100) / rolls%
	         
       Display       5                 num5s          ((double)num1s * 100) / rolls%
	         
       Display       6                 num6s          ((double)num1s * 100) / rolls%
*/

#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(0));
	int dice = 0, rolls = 0, num1s = 0, num2s = 0, num3s = 0, num4s = 0, num5s = 0, num6s = 0;
	do {

		cout << "Please enter in number of rolls: ";
		cin >> rolls;

		if (rolls < 1) {
			cout << "Please enter rolls > 1\n";
		}

	} while (rolls < 1);

	cout << "\nDICE ROLL STATISTICS\n" << endl;
	cout << "# Rolled" << setw(16) << "# Times" << setw(20) << "% Times\n";
	cout << "--------" << setw(16) << "-------" << setw(20) << "-------\n";

	for (int i = 1; i <= rolls; i++)
	{
		dice = 1 + (rand() % 6);
		switch (dice)
		{
		case 1 :
			num1s += 1;
			break;
		case 2:
			num2s += 1;
			break;
		case 3:
			num3s += 1;
			break;
		case 4:
			num4s += 1;
			break;
		case 5:
			num5s += 1;
			break;
		case 6:
			num6s += 1;
			break;
		default:
			break;
		}
	}
	cout << "\n";
	cout << setw(8) << " 1" << setw(16) << num1s << setw(16) << fixed << setprecision(2) << ((double)num1s * 100) / rolls << "%\n";
	cout << setw(8) << " 2" << setw(16) << num2s << setw(16) << fixed << setprecision(2) << ((double)num2s * 100) / rolls << "%\n";
	cout << setw(8) << " 3" << setw(16) << num3s << setw(16) << fixed << setprecision(2) << ((double)num3s * 100) / rolls << "%\n";
	cout << setw(8) << " 4" << setw(16) << num4s << setw(16) << fixed << setprecision(2) << ((double)num4s * 100) / rolls << "%\n";
	cout << setw(8) << " 5" << setw(16) << num5s << setw(16) << fixed << setprecision(2) << ((double)num5s * 100) / rolls << "%\n";
	cout << setw(8) << " 6" << setw(16) << num6s << setw(16) << fixed << setprecision(2) << ((double)num6s * 100) / rolls << "%\n";

	return 0;
}