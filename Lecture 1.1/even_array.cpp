#include <iostream>
#include<conio.h>

using namespace std;

int main() 
{
    int n;

    cout <<"Enter the number of elements :";
        cin>>n;

    int a[n];
    
    cout <<"Enter the elements of the array :"<<endl;
    for (int i = 0; i < n; i++) 
	{
        cin >> a[i];
    }

    cout <<"Even elements in the array :";
    for (int i = 0; i < n; i++) 
	{
        if (a[i] % 2 == 0)
		 {
            cout << a[i] <<" ";
        }
    }
         cout <<endl;

    return 0;
}
