#include <iostream>
using namespace std;

int main()
{
	
	int bottles =99;
	while (bottles > 0)
	{
		cout << bottles << " bottles of beer on the wall," << endl;
		cout << bottles << " bottles of beer." << endl;
		cout << "Take one down, pass it around," << endl;
		cout << -- bottles << " bottles of beer on the wall." << endl;
		if (bottles ==0)
		{
			cout << "No more bottles of beer on the wall," << endl;
			cout << "No more bottles of beer," << endl;
			cout << "Go to the store and buy some more," << endl;
		}
	
	}
		
		cout <<  "99 bottles of beer on the wall." << endl;
		
	return 0;
}