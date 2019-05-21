/*
 *  ErrorCodes
 *  - Description: Data structure with string and number for enum similar
 */
#include "ErrorCodes.h"

/*
 *	Constructor
 */
ErrorCodes::ErrorCodes() {
	EnumString e [MAX_ERRORS_NUMBER];
	this->errors = e;
	this->errorCounting = 0;
}

/*
 *	Checks if code already exists
 */
bool ErrorCodes::codeExists (int code) {
	bool exists = false;
	for (byte i = 0; i < this->errorCounting; i++) {
		if (this->errors[i].getCode() == code)
			return true;
	}
	return exists;
}

/*
 *	Add errors
 */
bool ErrorCodes::addError (EnumString error) {
	if (this->codeExists(error.getCode()))
		return false;
	else {
		this->errors[this->errorCounting] = error;
		errorCounting += 1;
	}
	return true;
}
bool ErrorCodes::addError (String errorString) {
	int code = 0;
	while (this->codeExists(code))
		code++;
	this->errors[this->errorCounting] = EnumString(errorString, code);
	errorCounting += 1;
	return true;
}
bool ErrorCodes::addError (String errorString, int errorCode) {
	if (this->codeExists(errorCode))
		return false;
	else {
		this->errors[this->errorCounting] = EnumString(errorString, errorCode);
		errorCounting += 1;
	}
	return true;
}

/*
 *	Remove errors
 */
bool ErrorCodes::removeError (EnumString error) {
	// TODO
	return false;
}
bool ErrorCodes::removeError (String errorString) {
	// TODO
	return false;
}
bool ErrorCodes::removeError (int errorCode) {
	// TODO
	return false;
}

/*
 *	Get errors
 */
EnumString ErrorCodes::getError (EnumString error) {
	int code = error.getCode();
	for (byte i = 0; i < this->errorCounting; i++) {
		if (this->errors[i].getCode() == code)
			return this->errors[i];
	}
	return;
}
EnumString ErrorCodes::getError (int errorCode) {
	for (byte i = 0; i < this->errorCounting; i++) {
		if (this->errors[i].getCode() == errorCode)
			return this->errors[i];
	}
	return;
}
EnumString ErrorCodes::getError (String errorString) {
	for (byte i = 0; i < this->errorCounting; i++) {
		if (this->errors[i].getString() == errorString)
			return this->errors[i];
	}
	return;
}