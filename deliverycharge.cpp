// Suryadev 0137241
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	double parcel_weight;


	cout << "Enter weight of parcel KG :";
	cin >> parcel_weight;

	if (parcel_weight > 0)
	{
		if (parcel_weight < 2.5)
		{
			cout << "Delivery charge is RM" << parcel_weight * 3.50;
		}
		else
		{
			if (parcel_weight > 5)
			{
				cout << "Delivery charge is RM" << parcel_weight * 2.45;
			}

			else
			{

				cout << "Delivery charge is RM" << parcel_weight * 2.85;
			}
		}
	}
	else
	{
		cout << "not possible to have no weight" << endl;
	}

}