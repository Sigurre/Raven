//This is the header file for the Raven Statistics processor
//The exact contents of this class are currently undetermined. 
//See sketchbook for details
//Last updated 5/28/14

#ifndef RAVEN_H
#define RAVEN_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

namespace Raven
{

	class Raven
	{
	public:
		Raven();
		void fillVector(ifstream& messyFile); //Fill the vector with data from file--takes an input stream as an argument
		void combineExt();//Combine the values in two extensions
		void rmHours();//Remove the row from a table that has out of office hours timestamp
		void rmDup();//Remove the row from a table that is the duplicate of a previous 
	private:
		std::vector< std::vector<int> > table;
	};
}
#endif