#include <iostream>

using namespace std;

class Student
{
	char* firstName;
	char* secondName;
	int studID;
	int groupID;

public:

	void SetFirstName(char* newFirstName)
	{
		firstName = newFirstName;
	}
	void SetSecondName(char* newSecondName)
	{
		secondName = newSecondName;
	}
	void SetStudID(int newStudID)
	{
		studID = newStudID;
	}
	void SetGroupID(int newGroupID)
	{
		groupID = newGroupID;
	}

	char* GetFirstName()
	{
		return firstName;
	}
	char* GetSecondName()
	{
		return secondName;
	}
	int GetStudID()
	{
		return studID;
	}
	int GetGroupID()
	{
		return groupID;
	}

	Student(char* fName, char* sName, int stID, int grID)
	{
		firstName = fName;
		secondName = sName;
		studID = stID;
		groupID = grID;
	}
	Student()
	{
		firstName = NULL;
		secondName = NULL;
		studID = 0;
		groupID = 0;
	}
	~Student()
	{
		if (firstName)
			free(firstName);
		if (secondName)
			free(secondName);
		studID = 0;
		groupID = 0;
	}
};

class StudGroup
{
	int groupID;
	int amountOfStud;
	Student* studGroup;

public:

	StudGroup(int studAmount, int grID)
	{
		groupID = grID;

		if (studAmount == 0)
			cout << "ERROR. Amount of students can't be '0' " << endl;

		amountOfStud = studAmount;

		studGroup = (Student*)calloc(sizeof(Student), studAmount);

		if (!studGroup)
			cout << "ERROR. Not enough memory" << endl;
	}
	StudGroup()
	{
		groupID = 0;
		amountOfStud = 0;
		studGroup = NULL;
	}
	~StudGroup()
	{
		if (studGroup)
			free(studGroup);
		amountOfStud = 0;
		groupID = 0;
	}

};

int main()
{
	return 0;
}
