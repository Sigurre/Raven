#include <string>
#include "RavenEx.h"

using namespace std;
namespace Raven
{
	RavenEx::RavenEx(string errorMessage)
	{
		// Set the stored message within the object
		// Any text will be accepted as the error message
		message = errorMessage;
	}
	
	string RavenEx::errorMessage()
	{
		//Return the error message stored inside of the object
		return message;
	}
}