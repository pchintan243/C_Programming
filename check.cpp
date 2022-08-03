#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
            int upper=0;
            int lower=0;
            int special=0;
            int numeric=0;
            if(s=65 & s=90)
            {
                upper++;
            }
            else if(s=97 & s= 122)
            {
                lower++;
            }
            else if(s=0  s=9) 
            {
                numeric++;
            }
            else
            {
                special++;
            }
            cout << upper <<endl << lower << endl << numeric << endl << special;
    return 0;
}