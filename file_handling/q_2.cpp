//By: Vandit Prajapati
//CPP Assignment Q-2
//Count no. of words that has 'a' in it

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	string str;
	char ch='a';
	int count=0;
	
	fin.open("q_2.txt");
	
	if(!fin)
	{
		cout<<"File doesnt exist"<<endl;
	}
	else
	{
		while(fin>>str)
		{
			for(int i=0;i<str.length();i++)
			{
				if(str[i]==ch)
				{
					count++;
				}
			}
		}
	}
	
	cout<<"Total no. of words that has 'a' in it is: "<<count<<endl;
}
