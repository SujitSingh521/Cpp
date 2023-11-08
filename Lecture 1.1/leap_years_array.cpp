#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int m,n,t;
	
	cout<<"Enter the first number :";    // 2020
	   cin>>m;
	   
	cout<<"Enter the second number :";   // 2040
	    cin>>n;
    
    int j=0,s[(n-m)/4+1];
    
    for(t=m;t<=n;t++)
    {
    	if(t%4==0)
    	{
    		s[j]=t;
    		j++;
		}
	}
	for(t=0;t<((n-m)/4)+1;t++)
	{
		cout<<s[t]<<endl;
	}
}