#pragma once
#include "Email.h"
class Handler
{
public:
    virtual ~Handler() {}
    virtual void HandleRequest(Email email)
    {
        if (_successor)
            _successor->HandleRequest(email);
    }

    Handler(Handler* successor);
protected:
    Handler* _successor;
};
