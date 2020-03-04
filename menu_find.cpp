/*Assignment 1- Accept n numbers and use a menu driven program (1. Find a number, 2. Exit) to find a number in an array. The program should read n numbers from users first then display the menu and find entered number until the user exits. Students must implement one function for each task like reading n numbers, find number, display menu and accept a valid choice, etc. */

#include<iostream>
using namespace std;

int size;
int _arr[100];
const int ARRAY_SIZE = 100;
void _readSize()
{
	cout<<"Enter the number of elements in the array \n";
	cin>>size;
	
	//	cout<<"size entered "<<size;
	//if()
	if(size<1 || size>ARRAY_SIZE)
	{
		cout<<"Please enter a valid array size(Must be greater than 0 ,less than 100)"<<endl;
		_readSize();
	}
}

void  _readArray()
{
	cout<<"Enter the array elements";
	for(int i=0;i<size;i++)
	{
		cin>>_arr[i];
	}
}

bool _findNum()
{
	int i;
	int num;
	bool stat=false;
	cout<<"Enter the number you want to find."<<endl;
	cin>>num;
	for(i=0;i<size;i++)
	{
		if(_arr[i] == num)
		{
		//	cout<<"The number"<<num<<"is present in the array"<<endl;	
		//	_displayMenu();
		stat = true;
		}
		
	}
	return stat;
}

void _displayMenu()
{
	int ch;
	cout<<"Enter a choice to execute"<<endl;
	cout<<"1.Find a number from input array."<<endl;
	cout<<"2.Exit."<<endl;
	cin>>ch;

	switch(ch)
	{
		case 1:
				//call find a num func
				(_findNum())?cout<<"Number found\n":cout<<"Number not found"<<endl;
				_displayMenu();
		break;
		case 2:
				//exit
				exit(0);
		break;
		default:
			cout<<"Entered invalid choice."<<endl;
			_displayMenu();
			// call _displayMenu again
		break;
		}

}

int main()
{
	_readSize();
	 _readArray();
	_displayMenu();
	return 0;
}
