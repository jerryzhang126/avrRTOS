/*
 *  ErrorCodes
 *  - Description: Data structure with string and number for enum similar
 */
#ifndef ERROR_CODES
#define ERROR_CODES

/*
 *  Mandatory includes
 */
#include "EnumString.h"

/*
 *	Macros
 */
#define MAX_ERRORS_NUMBER		255

/*
 *  Class
 */
class ErrorCodes {

	/*
		*  Public methods and attributes
		*/
	public:

		// Constructors
		ErrorCodes ();

		// Add errors
		bool addError (EnumString);
		bool addError (String errorString);
		bool addError (String errorString, int errorCode);

		// Remove errors
		bool removeError (EnumString error);
		bool removeError (String errorString);
		bool removeError (int errorCode);

		// Get error
		EnumString getError (EnumString error);
		EnumString getError (int errorCode);
		EnumString getError (String errorString);

	/*
		*  Private methods and attributes
		*/
	private:

		// Error codes
		EnumString *errors;

		// Error counting
		byte errorCounting = 0;

		// Checks if error code exists already
		bool codeExists (int code);

};

#endif