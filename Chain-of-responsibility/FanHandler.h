#include "Handler.h"
class FanHandler : public Handler
{
public:
	FanHandler(Handler successor);
	void HandleRequest(Email email);
};