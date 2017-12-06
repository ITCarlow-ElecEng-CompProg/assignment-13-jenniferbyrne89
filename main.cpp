/** Jennifer Byrne
    27/09/2017
    Lab 13
    Prime Number Calculations */

/** Preprocessor directives */
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    long int checkPrime, i, j;

    /** ofstream object called primeNumber created */
	ofstream primeNumber( "primeNumber.txt", ios::out );

	/**< determine whether the open operation succeeded */
	if ( !primeNumber )
	{
		cerr << "File could not be opened!" << endl;
		exit( 1 );
	}

    cout << "Check if a Number is Prime\n\n" << endl;;
    primeNumber << "Check if a Number is Prime\n\n" << endl;;

    cout << "List of prime numbers :\t" << endl;
    cin >> checkPrime;

    /** Loop to print every prime number between 2 and the number entered to check */
    for(i=2; i<=checkPrime; i++)
    {
            /** for loop to check for prime number */
            for (j = 2; j <= i; j++)
                {
                    if (i % j == 0)
                    break;
                }

            if (j == i)
                {
                    cout << "\n" << i << " is a prime number.\n" ;
                    primeNumber << "\n" << i << " is a prime number.\n" ;
                }
    }


   	/** close the ofstream object explicitly */
	primeNumber.close();

    return 0;
}

