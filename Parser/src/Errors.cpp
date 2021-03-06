/*
 * Errors.cpp
 *
 *  Created on: 20.01.2016
 *      Author: root
 */


#include "Errors.h"

void throwError(ErrorType type) {
	char* errorString = "Error: %s", errorTypeToString(type);
	throw errorString;
}

char* errorTypeToString(ErrorType type) {
	switch(type) {
	case PROHIBITED_TOKEN:
		return "Token is not defined by the standard";
	case INVALID_SEMANTICS:
		return "Tokens form incompilable code";
	case NON_MATCHING_TYPES:
		return "Cannot convert from int[] to int";
	}
}
