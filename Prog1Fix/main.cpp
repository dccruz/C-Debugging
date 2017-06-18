#include <iostream>// Missing the #include, and the < for iostream>
using namespace std;
int main ( ) {  // start program; c++ is case sensative so Int should be int, also missing curly bracket
cout << "DC Cruz June 16th 2017"<<endl;
int height = 0, feet = 0, inches = 0; //since we are doing multiple variables that are the same int we only need commas in between them.
// Prompt for height
    cout << "Enter your height in inches : " << endl;// need to end line and move cin to its own line
    cin >> height;
// Calculate Height in feet and inches
feet = height / 12; // fomula was backwards
inches = height % 12;
//Print out height in feet and inches ; missing second commen out slash
    cout << "You are " << feet << " Feet and " << inches << " Inches " << endl; // the FEET needs to be lowercase, <> & >>  should be <<, the quotations were incorrect, also needed to end line.
//system(“pause”); // Mac user comment out this line by placing // in front of it.
// PC users -Hint replace the “ with the ones on your computer–coping code cause error, so just type it.
return 0;
} // end of program




//Original Code 
//# iostream>
//using namespace std;
//Int main ( ) / / start program
/// Declare and Initialize Variables int height = 0;
//int feet = 0 Int inches = 0;
//// Prompt for height
//cout >> “Enter your height in inches: ‘; cin >> Height;
//// Calculate Height in feet and inches height / 12 = feet;
//inches = height % 12;
///Print out height in feet and inches
//coutt << “You are “ < FEET << “ feet and “ <> inches >> “inches” ;
//system(“pause”); // Mac user comment out this line by placing // in front of it.
//// PC users -Hint replace the “ with the ones on your computer–coping code cause error, so just type it. return 0;
//} // end of program
