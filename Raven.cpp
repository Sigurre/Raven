//This is the implementation file for the Raven Statistics Processor
//Includes RAVEN.H
//Last updated 5/28/14

#include "Raven.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
namespace Raven
{

	Raven::Raven()
	{
		//Intentionally empty for now
	}
	void Raven::fillVector(ifstream& messyFile)
	{
		ifstream inStream;
		ofstream outStream;
		string fileName;

		cout << "Please enter the name of the file you would like to process.";
		cin >> fileName;
		cout << "Connecting to file.";
			try
		{
			int colCount; //Keeps track of the number of columns 
			inStream.open(filename);
			if (inStream.fail())
				throw RavenEx("ERROR 101: Failed to open file");
			do
			{
				char temp;
				char del;
				getline(inStream, temp); //Get a line from the file
				
				temp.find(pos, '"'); //Find any quotation marks and remove them
				del = pos; //Assign the position in the c-string to "del"
				erase(del,1); //Erase the position
				
				for (unsigned int i = 0; i <= 4; i++)
				{
					table.push_back(vector<int>()); //Create an empty row
					table[i].push_back(); //Add data in the file into the matrix
				}
			} while (!inStream.eof());
		}
	}
	void Raven::combineExt()
	{
		//Empty for now (until able to check references)
	}
	void Raven::rmHours()
	{
		//Empty for now (until able to check references)
	}
	void Raven::rmDup();
	{
		//Empty for now (until able to check references)
	}
}