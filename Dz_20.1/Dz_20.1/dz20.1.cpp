#include <iostream>

using namespace std;

class Counter
{
	double value;

public:

	double getValue()
	{
		return value;
	}

	void setValue(double newValue)
	{
		value = newValue;
	}

	void setMax()
	{
		value = 99.99;
	}

	void setMin()
	{
		value = 0;
	}

	void increase()
	{
		if (value == 99.99)
		{
			value = 0;
		}
		else
			value += 0.01;
	}

	void decrease()
	{
		if (value == 0)
		{
			value = 99.99;
		}
		else
			value -= 0.01;
	}

	Counter(double initValue)
	{
		value = initValue;
	}
	Counter()
	{
		value = 0;
	}
};


int main()
{
	Counter counter = 0;

	cout << counter.getValue() << endl;

	counter.increase();
	cout << counter.getValue() << endl;

	counter.setMax();
	cout << counter.getValue() << endl;

	counter.setMin();
	cout << counter.getValue() << endl;

	for (int i = 0; i < 101; i++)
	{
		counter.increase();
		cout << counter.getValue() << endl;
	}

	counter.decrease();
	cout << counter.getValue() << endl;

	return 0;
}