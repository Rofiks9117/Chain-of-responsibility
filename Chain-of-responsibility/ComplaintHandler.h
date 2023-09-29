#include "Handler.h"
class ComplaintHandler : public Handler
{
public:
	ComplaintHandler(Handler successor);
	void HandleRequest(Email email);
};