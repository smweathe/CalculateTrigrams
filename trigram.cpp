//Stephen Weatherly
//Counting Trigrams

#include "stdafx.h"
#include <map>
#include "std_lib_facilities.h"
#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string a;
	cout << "Counting Trigrams Program" << endl;
	cout << "\n";
	cout << "Enter a string sequence to calculate trigrams: ";
	getline(cin,a);
	cout << "\nThe string sequence you entered was: " << a;
	replace(a.begin(), a.end(), ' ', '_');
	map<string, int> words;
	for (int i = 0; i < a.size() - 2; i++) {
		words[a.substr(i, 3)]++;
		//cout << a.substr(i, 3) << endl;
	}
	cout << "\n\n";
	cout << "Trigram results Total" << endl;
	cout << "---------------------" << endl;

	for (auto & iter : words)
		cout << iter.first << " " << "(" << iter.second << ")" << endl;
	cout << endl;
	system("pause");
	return 0;
}
