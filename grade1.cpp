// Suryadev V.S 0137241
#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int serial_num;
	double exam_score = 0.00;
	char grade = ' ';

	cout << "Enter student's  serial number :";
		cin >> serial_num;
		cout << "Enter Exam Score : ";
		cin >> exam_score;
if (exam_score < 0 )
{
	cout << "no such record found. Try again";
}
else
{
	if (exam_score >= 90)
	{
		grade = 'A';
	}
	else
	{
		if (exam_score >= 80)
		{
			grade = 'B';
		}
		else
		{
			if (exam_score >= 70)
			{
				grade = 'C';
			}
			else
			{
				if (exam_score >= 60)
				{
					grade = 'D';
				}
				else
				{
					if (exam_score < 60)
					{
						grade = 'F';



					}// END IF
				}
			}
		}
	}
}		 //endif
	 // endif
	if (exam_score >= 90 || exam_score >= 80 || exam_score >= 70 || exam_score >= 60 || exam_score < 60)
		cout << "letter grade is " << grade;
} //end
