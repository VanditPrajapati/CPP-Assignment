//By: Vandit Prajapati
//CPP Assignment Q-5
//Student info

#include<fstream>
#include<iostream>
#include<cstring>
#include <string>
#include <sstream>
using namespace std;

class student
{
	public:
	     int id;
	     string name;
	     string location; 
	     string branch;
	     
	     void getdata()
	     {
	     	cout << "Enter ID" <<endl;
	     	cin>>id;
	     	cout << "Enter Name" <<endl;
	     	cin>>name;
	     	cout << "Enter Location" <<endl;
	     	cin>>location;
	     	cout<<"Enter Branch"<<endl;
	     	cin>>branch;
	     }
	     
	     void addinfo()
	     {
	     	fstream f;
	     	student stu;
	     	f.open("student.txt", ios::app);
	     	stu.getdata();
	     	f << stu.id << "\t" << stu.name << "\t" << stu.location << "\t"<< stu.branch << endl;
	     	f.close();
	     }
	     
	     void display()
	     {
	     	int id1;
	     	int count=1;
	     	int flag = 1;
	     	int count1=0;
	     	int num;
	     	string buf,str;
	     	fstream f1;
	     	student s;
	     	cout<< "Enter a student ID:-";
	     	cin >> id1;
	     	f1.open("student.txt", ios::in);
	     	
	     	while(getline(f1,buf))
		{
			stringstream ss(buf);
			while(getline(ss,str,'\t'))
	     		{
	     			if(count1 == 0)
	     			{
	     				count1++;
	     				continue;
	     			}
		     		else if(count == 0)
		     		{
		     			  stringstream obj;  
					  obj << str;  
					  obj >> num;  
					  if(num == id1)
					  {
					  	flag = 0;
					  	getline(ss,str,'\t');
					  	cout << "Name: " << str << "\t";
					  	getline(ss,str,'\t');
					  	cout << "Location: " << str << "\t";
					  	getline(ss,str,'\t');
					  	cout << "Branch: " << str << "\t" << endl;
					  	cout<<"\n";
					  	break;
					  }
		     		}
		     		count++;
	     		}
	     		count = 0;
	     	}
	     	try
	     	{
	     		if(flag)
	     		{	
	     			throw flag;
	     		}
	     	}
	     	catch(int x)
		{
			cout<<"Student not found\n"<<endl;
		}
	     	f1.close();
	     }
};

int main()
{
	student s1;
	fstream f;
	int op;
	f.open("student.txt", ios::app);
	
	while(1)
	{
		cout<<"Enter the operation to be performed: "<<endl;
		cout << "1. Enter student detail \n2. Find student \n3. Exit"<<endl; 
		cin >> op;
		if(op == 1)
		{
			s1.addinfo();
		}
		else if(op == 2)
		{
			student s2;
			s2.display();
		}		
		else 
		{
			break;
		}
	}
}
