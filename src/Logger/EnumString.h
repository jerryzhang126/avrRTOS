/*
 *  EnumString
 *  - Description: Data structure with string and number for enum similar
 */
#ifndef ENUM_STRING
#define ENUM_STRING

/*
 *  Mandatory includes
 */
#include <Arduino.h>

/*
 *  Class
 */
class EnumString {

	/*
		*  Public methods and attributes
		*/
	public:

		// Constructors
		EnumString () { enumString = ""; enumCode = NULL; };
		EnumString (String enumString) { enumString = enumString; enumCode = NULL; };
		EnumString (String enumString, int enumCode) { enumString = enumString; enumCode = enumCode; };

		// Getters
		String getString () { return enumString; };
		int getCode () { return enumCode; };

		// Setters
		void setString (String newString) { enumString = newString; };
		void setCode (int newCode) { enumCode = newCode; }


	/*
		*  Private methods and attributes
		*/
	private:

		// Enum string and code
		String enumString;
		int enumCode;
};

#endif