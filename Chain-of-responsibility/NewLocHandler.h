#include "Handler.h"
class NewLocHandler : public Handler
{
public:
	NewLocHandler(Handler successor);
	void HandleRequest(Email email);
};