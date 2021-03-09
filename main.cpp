// MovieGuide.cpp - This program allows each theater patron to enter a 
//                  value from 0 to 4 indicating the number of stars that 
//                  the patron awards to the Guide's featured movie of the 
//                  week.  
// Input:  Number of Stars (Movie Rating)
// Output: Average of Stars for Movie

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// Declare and initialize variables.
	double numStars;         	 // star rating.
	double averageStars;  	     // average star rating.
	double totalStars = 0; 	     // total of star ratings.
	int numPatrons = 0;          // keep track of number of patrons
	string movie;
	
   // Housekeeping section

	cout << "* * * * * * * *  Movie Rating Guide * * * * * * *";
	cout << "\n\nMovie of the Week:" ;
	getline(cin, movie);
	cout << "\nEnter rating for featured movie or -1 to exit:" ;
	cin >> numStars; 

   // Write while loop here    

	while (numStars != -1)
    {
       cout << "Enter rating for featured movie:";
       cin >> numStars;
       
       if (numStars != -1)
       {
	       numPatrons++;
	       totalStars += numStars;
       }
    }


	averageStars = (totalStars/numPatrons);

   // End Of Job section:

	cout << fixed << setprecision(2);
	cout << "\nAverage Star Value: " << averageStars << endl; 
	return 0;
   
}