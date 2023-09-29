#include "Handler.h"

Handler::Handler(Handler* successor)
{
	_successor = successor;
}
