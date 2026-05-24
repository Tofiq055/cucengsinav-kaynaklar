//working well
#include <iostream>
using namespace std;

const int MAX = 20;

int main()
{
	char string[MAX];
	char reverse[MAX];

	char* sptr = string; // sptr stores the base address of the string
	char* rptr = reverse; // rptr stores the base address of the reverse

	int i = -1;

	cout << "\n\nEnter a string: " << endl;
	cin >> string;

	// storing the ending address of the string in sptr
	while (*sptr)
	{
		sptr++;
		i++; // index of the end location
	}

	// storing string in reverse, in reverse order
	while (i >= 0)
	{
		/*
			First decrementing then using as it stores
			the location after the end location due to above while loop
		*/
		sptr--;
		*rptr = *sptr;  // storing the value in sptr in rptr
		rptr++; // pointing to next location
		i--;    // decrementing the index
	}



	*rptr = '\0'; //	String should always end with '\0' so putting it at the end of the string manually
	rptr = reverse; // restoring the base address of the reverse string

	// storing the reverse string in the original string
	while (*rptr)
	{
		*sptr = *rptr;
		sptr++;
		rptr++;
	}
	cout << "\n\n Reverse of the string is: " << string << endl;
	return 0;
}