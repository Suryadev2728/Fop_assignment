//Suryadev V.S 0137241
#include <iostream>

using namespace std;

int main()
{
	double num_1, num_2;
	int  int_code;

	cout << "enter two integers ";
	cin >> num_1 >> num_2;
	cout << "Enter integar code (1 to +, 2 to -, 3 to *, 4 to / ";
	cin >> int_code;

	if (int_code >= 1 || int_code <= 4)
	{
		if (int_code == 1)
		{
			cout << num_1 << "+" << num_2 << "=" << num_1 + num_2 << endl;
		}
		else
		{
			if (int_code == 2)
			{
				cout << num_1 << "-" << num_2 << "=" << num_1 - num_2 << endl;
			}
			else
			{
				if (int_code == 3)
				{
					cout << num_1 << "*" << num_2 << "=" << num_1 * num_2 << endl;
				}
				else
				{
					if (int_code == 4)
					{
						if (num_2 > 0)
						{
							cout << num_1 << "/" << num_2 << "=" << num_1 / num_2 << endl;
						}
						else
						{
							cout << "cannot divide by 0" << endl;
						}
							
					}
					else
					{
						cout << "invalid integer code" << endl;
					}
				}
			}
		}
	
		
	}//endif
}//end
