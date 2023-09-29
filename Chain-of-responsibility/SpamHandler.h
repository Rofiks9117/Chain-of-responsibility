#include "Handler.h"
class SpamHandler : public Handler
{
public:
	SpamHandler(Handler successor);
	void HandleRequest(Email email);
};