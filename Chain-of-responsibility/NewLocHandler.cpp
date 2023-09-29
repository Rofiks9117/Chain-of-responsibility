#include "NewLocHandler.h"
#include <iostream>
#include <string>

NewLocHandler::NewLocHandler(Handler successor) : Handler(successor)
{

}

void NewLocHandler::HandleRequest(Email email)
{
	if (email.Type == EmailType::Unclassified)
	{
		std::cout << "NewLocHandler Handler is handling the following message …" << std::endl;
		std::cout << "Sending to business development..." << std::endl;
		std::cout << email.message.c_str() << std::endl;
		std::cout << std::endl;
	}
	else if (_successor != NULL)
	{
		_successor->HandleRequest(email);
	}
}
