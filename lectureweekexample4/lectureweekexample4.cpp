// lectureweekexample4.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	dd
		dd
	char fullname[50];
	char *lastname;

	// ask user for name
	cout << "Please enter your full name" << endl;
	gets_s(fullname);

	lastname = fullname;  // == lastname = &fullname[0];
	cout << lastname << endl;

	int i = 0;
	while (fullname[i] != ' ')
	{
		lastname++;
		i++;
	}
	lastname++;
	cout << lastname << endl;

	return 0;
}
#include "stdafx.h"


int main()
{
    return 0;
}

