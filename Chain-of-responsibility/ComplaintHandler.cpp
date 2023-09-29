#include "ComplaintHandler.h"

ComplaintHandler::ComplaintHandler(Handler successor) : Handler(successor)
{

}

void ComplaintHandler::HandleRequest(Email email)
{
	if (email.Type == EmailType::Complaint)
	{
		std::cout << "ComplaintHandler Handler is handling the following message …" << std::endl;
		std::cout << "Sending to the legal department..." << std::endl;
		std::cout << email.message.c_str() << std::endl;
		std::cout << std::endl;
	}
	else if (_successor != NULL)
	{
		_successor->HandleRequest(email);
	}
}
