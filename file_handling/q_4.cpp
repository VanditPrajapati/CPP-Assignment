//By: Vandit Prajapati
//CPP Assignment Q-3
//Count no. of words that end with 's'

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	string str;
	char ch='s';
	int count=0,i;
	
	fin.open("q_4.txt");
	
	if(!fin)
	{
		cout<<"File doesnt exist"<<endl;
	}
	else
	{
		while(fin>>str)
		{
			for(i=0;i<str.length();i++);
			if(str[i-1]==ch)
			{
				count++;
			}
		}
	}
	
	cout<<"Total no. of words that end with 's' is : "<<count<<endl;
}
