//By: Vandit Prajapati
//CPP Assignment Q-1
//Counting no. of times word "the" present in the file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	string str, str1="the";
	int count=0;
	
	fin.open("q_1.txt");
	
	if(!fin)
	{
		cout<<"File doesnt exist"<<endl;
	}
	
	else
	{
		while(fin>>str)
		{
			if(str==str1)
			{
				count++;
			}
		}
	}
	
	cout<<"Total no. of word 'the' is "<<count<<endl;
}
