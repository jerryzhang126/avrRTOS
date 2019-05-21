/*
 *  Logger
 *  - Description: A simple logger for any event that may happen
 */
#ifndef LOGGER
#define LOGGER

/*
 *  Mandatory includes
 */
#include <Arduino.h>
#include "EnumString.h"

/*
 *  Class
 */
class Logger {

	/*
		*  Public methods and attributes
		*/
	public:

		// Constructors
		Logger (Serial_ &serial);

		// Log event
		void log (EnumString error);
		void log (String message);

	/*
		*  Private methods and attributes
		*/
	private:

		// Serial
		Serial_ *serial;

		// Time to string
		char *TimeToString (unsigned long time);

};

#endif