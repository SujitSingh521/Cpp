#include <iostream>
#include<conio.h>

using namespace std;

int main() 
{
    int feet, inch;

    cout <<"Enter the feet :";    // 6
      cin >> feet;
    
    cout <<"Enter the inches :";  // 20
      cin >> inch;

    if (inch >= 12) 
    {
        feet += inch / 12; 
        inch %= 12;
    }

    cout <<"Distance: " << feet  <<" feet "<< inch <<" inches " << endl;

    return 0;
}
