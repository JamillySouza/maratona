//============================================================================
// Name        : nlog.cpp
// Author      : Jamilly
// Version     :
// Copyright   : 
// Description : ICPC - Regional 2008 - Problema H - Divisão na Nlogônia
//============================================================================


#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> p;
	int k, n, m, x, y; 
		
	while(cin>>k && k)
	{
		cin>>n>>m;
		
		for(int a=0; a<k; a++)
		{
			cin>>x>>y;
			
			if(x!=n && y!=m)
			{
				if(x>n)
					if(y>m)
					p.push_back("NE");
					else
					p.push_back("SE");
					
				else
					if(y>m)
					p.push_back("NO");
					else
					p.push_back("SO");
			}
			
			else
			p.push_back("divisa");
		}
		
	}
	
	for(int a = 0; a<p.size(); a++)
	cout<<p[a]<<endl;
}
