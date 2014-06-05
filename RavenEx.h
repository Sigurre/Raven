//This is the exception handler for Raven 1.2
//This is the header file
//Last updated: 5/29/14

#include <iostream>

namespace Raven
{
	class RavenEx
	{
	public:
		RavenEx(string errorMessage);//Constructor: accepts the error message for the exception and sets "message" to the string
		string errorMessage();//Returns the "message"
	private:
		string message;
	}
}