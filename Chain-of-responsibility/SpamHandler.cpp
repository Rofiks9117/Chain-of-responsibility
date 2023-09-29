#include "SpamHandler.h"
#include <iostream>
#include <string>

SpamHandler::SpamHandler(Handler successor) : Handler(successor)
{

}

void SpamHandler::HandleRequest(Email email)
{
	if (email.Type == EmailType::Spam)
	{
		std::cout << "Spam Handler is handling the following message …" << std::endl;
		std::cout << "Deleting the following e-mail …" << std::endl;
		std::cout << email.message.c_str() << std::endl;
		std::cout << std::endl;
	}
	else if (_successor != NULL)
	{
		_successor->HandleRequest(email);
	}
}
