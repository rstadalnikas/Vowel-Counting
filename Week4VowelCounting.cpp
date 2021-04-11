//Console program takes in text file as argument and outputs 
//number of each vowel type and total vowel count in text file.

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		cout << "Error with input agrs.." << endl;
		return 1;
	}

	//open file, output error if no file argument given
	ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
		return 1;
	}

	//variables to store number of vowels and current character
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	int r = 0;
	int t = 0;
	int x = 0;
	int vowelCount = 0;
	char cha;

	//If eof isn't reached, compare current character to vowels list and increment as needed
	while (!inFile.eof()){
        inFile.get(cha);
			
        if (cha == 'a' || cha == 'A'){
			a++;
			vowelCount++;
		}
		if (cha == 'e' || cha == 'E'){
			e++;
			vowelCount++;
		}
		if (cha == 'i' || cha == 'I'){
			i++;
			vowelCount++;
		}
		if (cha == 'o' || cha == 'O'){
			o++;
			vowelCount++;
		}
		if (cha == 'u' || cha == 'U'){
			u++;
			vowelCount++;
		}
		if (cha == 'r' || cha == 'R'){
			r++;
		}
		if (cha == 't' || cha == 'T'){
			t++;
		}
		if (cha == 'x' || cha == 'X'){
			x++;
		}
	}

	//greeting
	cout << "************************************************************" << endl;
	cout << "************ Welcome to my Letter Count Program ************" << endl;
	cout << "************************************************************" << endl;

	cout << "\nAnalyzing file '" << argv[1] << "'...\n" << endl;
	
	//Output vowel counts
	cout << setw(57) << left << "The number of A's: ........................................"
         << setw(10) << a << endl;
	cout << setw(57) << left << "The number of E's: ........................................"
         << setw(10) << e << endl;
	cout << setw(57) << left << "The number of I's: ........................................"
         << setw(10) << i << endl;
	cout << setw(57) << left << "The number of O's: ........................................"
         << setw(10) << o << endl;
	cout << setw(57) << left << "The number of U's: ........................................"
         << setw(10) << u << endl;
	cout << setw(57) << left << "The vowel count is: ......................................."
         << setw(10) << vowelCount << endl;

	//Output consonants r, t, x
	cout << setw(57) << left << "\nThe number of R's: ........................................"
         << setw(10) << r << endl;
	cout << setw(57) << left << "The number of T's: ........................................"
         << setw(10) << t << endl;
	cout << setw(57) << left << "The number of X's: ........................................"
         << setw(10) << x << endl;


	inFile.close();

	system("PAUSE");

	return 0;
}
