// the goal of this program is to find magic dates if the day multipied to month equal the year then it's a magic date 
#include<iostream>
#include<iomanip>



using namespace std;

int main()
{
	int month;
	int day; 
	int year;
	int t;// this is the month and day multiplied
	cout << "Enter the month\n";
	cin >> month;
	cout << "Enter the day\n";
	cin >> day; 
	cout << "Enter the year \n";
	cin >> year;
	t = month * day;
	if ( t == year)
	{
		cout << "This is a magic date\n";
	}
	else
	{
		cout << "Not a magic date\n";
	}


	system("PAUSE");
	return 0; 
}