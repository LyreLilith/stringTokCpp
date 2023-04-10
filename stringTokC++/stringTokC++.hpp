#pragma once
#include <iostream>
/**
*Function: stringTok
* Description, tokenizes an input string, returns the token, edits
* the line to the vaules right of the delemiter
* Input Parameters: string stringToTokenize, string delimeter
* Output Parameters: string token, &rightSideOfToken
**/
static	std::string stringTok(std::string& line, std::string del);


