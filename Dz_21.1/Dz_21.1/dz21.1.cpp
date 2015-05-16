#include <iostream>

using namespace std;

#define MALE 1;
#define FEMALE 2;


class Person
{
	char* firstName;
	char* lastName;
	int gender;
	char* phoneNumber;

public:

	const void Print()
	{
		cout << "First name: " << firstName << endl;
		cout << "Lasst name: " << lastName << endl;
		if (gender == 1)
			cout << "Gender: Male" << endl;
		else
			cout << "Gender: Female" << endl;
		cout << "Phone number: " << phoneNumber << endl;
	}

	const char* getFirstName()
	{
		return firstName;
	}

	const char* getLastName()
	{
		return lastName;
	}

	const int getGender()
	{
		return gender;
	}

	const char* getPhoneNumber()
	{
		return phoneNumber;
	}

	const void setGender(char* newFirstName)
	{
		delete[](lastName);
		firstName = new char[strlen(newFirstName)];
		strcpy(firstName, newFirstName);
	}

	const void setLastName(char* newLastName)
	{
		delete[](firstName);
		lastName = new char[strlen(newLastName)];
		strcpy(lastName, newLastName);
	}

	const void setGender(int newGender)
	{
		gender = newGender;
	}

	const void setPhoneNomber(char* newNomber)
	{
		delete[](phoneNumber);
		phoneNumber = new char[strlen(newNomber)];
		strcpy(phoneNumber, newNomber);
	}

	Person(char* firstN, char* lastN, int gen, char* phoneN)
	{
		firstName = new char[strlen(firstN)];
		strcpy(firstName, firstN);
		lastName = new char[strlen(lastN)];
		strcpy(lastName, lastN);
		gender = gen;
		phoneNumber = new char[strlen(phoneN)];
		strcpy(phoneNumber, phoneN);
	}

	~Person()
	{
		delete[] firstName;
		delete[] lastName;
		delete[] phoneNumber;
	}
};