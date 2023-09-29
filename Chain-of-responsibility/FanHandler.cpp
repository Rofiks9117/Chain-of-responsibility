#include "FanHandler.h"
#include <iostream>
#include <string>

FanHandler::FanHandler(Handler successor) : Handler(successor)
{

}

void FanHandler::HandleRequest(Email email)
{
	if (email.Type == EmailType::Fan)
	{
		std::cout << "Fan Handler is handling the following message …" << std::endl;
		std::cout << "Sending to the CEO" << std::endl;
		std::cout << email.message.c_str() << std::endl;
		std::cout << std::endl;
	}
	else if (_successor != NULL)
	{
		_successor->HandleRequest(email);
	}
}
