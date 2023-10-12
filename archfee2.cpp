//suryadev V.S 0137241
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	double building_cost;
	double architect_fee = 0.00;
	double remainder ;
	

	cout << "Enter cost of building RM:";
	cin >> building_cost;
	 remainder = building_cost - 5000;
	 if (building_cost > 0)
	 {
		 if (remainder <= 80000)
		 {
			 architect_fee = (5000 * 0.08) + (remainder * 0.03);
		 }
		 else
		 {
			 if (remainder >= 80000)
			 {
				 architect_fee = (5000 * 0.08) + (remainder * 0.025);
			 }

			 else
			 {
				 cout << "error";
			 }

		 }
		 if (remainder <= 80000 || remainder >= 80000)
		 {
			 cout << "Architect fee is RM " << architect_fee << endl;

		 }
	 }
else
{
		cout << "error";
}
} // end