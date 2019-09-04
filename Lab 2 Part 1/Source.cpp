/*
Lane Pruisner
C++ Fall 2019
Due: September 12, 2019
Lab #2 Schedule
Print out my weekly schedule
*/
#include <iostream>

using namespace std;
// Variables to signify each day, class, and time //
const string M = "Monday\t";
const string T = "Tuesday\t";
const string W = "Wednesday\t";
const string TH = "Thursday\t";
const string F = "Friday\t";
const string CE = "College Experience 108";
const string C2 = "Calculus 2 216";
const string EP = "Engineering Problems 180";
const string CP = "C++ 162";
const string NT = "9:10\t";
const string TT = "10:20\t";
const string ET = "11:30\t";
const string TF = "12:40\t";
// cout to output variables to the screen with some \t for spacing // 
 int main()
{
	 cout << M; cout << "\t"; cout << NT; cout << CE << endl;
	 cout << M; cout << "\t"; cout << TT; cout << C2 << endl;
	 cout << M; cout << "\t"; cout << TF; cout << CP << endl;
	 cout << T; cout << "\t"; cout << TT; cout << C2 << endl;
	 cout << T; cout << "\t"; cout << ET; cout << EP << endl;
	 cout << T; cout << "\t"; cout << TF; cout << CP << endl;
	 cout << W; cout << NT; cout << CE << endl;
	 cout << W; cout << TT; cout << C2 << endl;
	 cout << W; cout << TF; cout << CP << endl;
	 cout << TH; cout << TT; cout << C2 << endl;
	 cout << TH; cout << ET; cout << EP << endl;
	 cout << TH; cout << TF; cout << CP << endl;
	 cout << F; cout << "\t"; cout << NT; cout << CE << endl;
	 return 0;
}