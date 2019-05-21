/*
 *  Logger
 *  - Description: A simple logger for any event that may happen
 */
#include "Logger.h"

/*
 *	Constructor
 */
Logger::Logger(Serial_ &serial) {
	this->serial = &serial;
}

/*
 *	Log events
 */
void Logger::log (EnumString error) {
	this->serial->print(this->TimeToString(millis()));
	this->serial->print(": ERROR ");
	this->serial->println(error.getString());
}

void Logger::log (String message) {
	this->serial->print(this->TimeToString(millis()));
	this->serial->print(": MESSAGE = ");
	this->serial->println(message);
}

/*
 *	Time to string
 */
char *Logger::TimeToString(unsigned long t) {
	t /= 1000;
	static char str[12];
	long h = t / 3600;
 	t = t % 3600;
 	int m = t / 60;
 	int s = t % 60;
 	return str;
}
