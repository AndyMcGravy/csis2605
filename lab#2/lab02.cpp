// Programmed by : Andrew McGarvie
// Assignment    : Lab #2
/* Purpose       : Write a program that will input the 
	number of chairs sold for given styles. 
	Then print the totals
*/

#include <iostream> // cout/cin library
#include <iomanip> // manipulation of i/o

using namespace std; //cout instead of std::cout

int main()
{
	//double americanColonialPrice = 85.0;
	//constants 
	const double AMERICAN_COLONIAL_PRICE = 85.0; 
	const double MODERN_PRICE = 57.50;
	const double FRENCH_CLASSICAL_PRICE = 127.75;
	
	//variables
	int americanColonialSold, totalChairsSold; // # of ac chairs sold
	int modernChairsSold = 0, frenchChairsSold = 0; // # of modern chairs sold
	double totalSalesAmerican, totalSalesModern, totalSalesFrench, totalSalesChairs, avgSale; 
	
	// initialized varibals
	totalSalesChairs = 0;
	
	// read in the values from the user 
	cout << "Please input the number of American" 
	     << " Colonial Chairs sold: " << endl;
	cin >> americanColonialSold;
	
	cout << "Please input the number of Modern Chairs"
	     << " sold:\n";
	cin >> modernChairsSold;
	
	cout << "Please input the number of French Classical"
	     << " Chairs sold: \n"; 
	cin >> frenchChairsSold;
	
	//computations
	//get sales of American Colonial
	totalSalesAmerican = americanColonialSold * AMERICAN_COLONIAL_PRICE;
	totalSalesModern = modernChairsSold * MODERN_PRICE;
	totalSalesFrench = frenchChairsSold * FRENCH_CLASSICAL_PRICE;
	
	//get total sales
	totalSalesChairs = totalSalesFrench + totalSalesModern + totalSalesAmerican;
	
	//how many total chairs sold
	totalChairsSold = frenchChairsSold + modernChairsSold + americanColonialSold;
	
	//find the average
	avgSale = totalSalesChairs / totalChairsSold;
	
	//output
	cout << setprecision(2); // set precision to two digits
	cout << fixed; // force display to show the . instead of sci notif
	
	cout << "\nThe total sales of American Colonial chairs: $" 
	     << totalSalesAmerican << endl;
	cout << "The total sales of Modern chairs: $" 
	     << totalSalesModern << endl;
	cout << "The total sales of French Classical chairs: $"
	     << totalSalesFrench << endl;
	cout << "The total sales of all the chairs: $"
	     << totalSalesChairs << endl;
	cout << "The average chair sale is: $"
	     << avgSale << endl;
	// return back to shell
	return 0;

}
