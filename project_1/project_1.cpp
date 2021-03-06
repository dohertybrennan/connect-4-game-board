// project_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//Will draws a dashed line on the top and bottom of the game board
void boarder(int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "----";
	}
	cout << "-" << endl;
}

//Counts the number of columns on the board and displays them at the bottom
void numbers(int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "  " << i + 1;
		if (i+1<10)
		{
			cout << " ";
		}
	}
}

//Draws the dividers between vertical places on the board
void spaceEnd(int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "|---";
	}
	cout << "|" << endl;
}

//Draws the actual space on the board
void spaceMid(int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "|" << "   ";
	}
	cout << "|" << endl;
}

//The function to call other functions in order to display the board
void printBoard(int x, int y)
{
	boarder(x);
	
	//Loops through every row of the game board and draws elements of each column.
	for (int j = 1; j < y; j++)
	{
		spaceMid(x);
		spaceEnd(x);
	}

	spaceMid(x);
	boarder(x);
	numbers(x);
	cout << endl << endl; //Extra spacing to make writing different boards clear
}


int main()
{
	int x = 15;
	int y = 10;
	printBoard(x, y);

	int a = 7;
	int b = 9;
	printBoard(a, b);

	int c = 12;
	int d = 11;
	printBoard(c, d);
}