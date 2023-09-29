#pragma once
#include <iostream>
#include <string>
#include "EmailType.h"

class Email
{
public:
	EmailType Type;
	std::string message;
	Email(EmailType, std::string);
};