#include <iostream>
#include <string>
#include "NewLocHandler.h"
#include "ComplaintHandler.h"
#include "FanHandler.h"
#include "SpamHandler.h"

int main()
{
	NewLocHandler* pNewLocHandler = new NewLocHandler(NULL);
	ComplaintHandler* pComplaintHandler = new ComplaintHandler(pNewLocHandler);
	FanHandler* pFanHandler = new FanHandler(pComplaintHandler);
	SpamHandler* pSpamHandler = new SpamHandler(pFanHandler);

	Handler emailHandler = new Handler((Handler*)pSpamHandler);

	Email* eSpam = new Email(EmailType::Spam, "Dear Dir, I am a Nigerian prince in need to transfer large \ sums of money out of the country. All I need is your bank account number …");
	emailHandler.HandleRequest(*eSpam);

	Email* eFan = new Email(EmailType::Fan, "I love your gumball machines! Please stock them with more bubble-gum flavors :-) ");
	emailHandler.HandleRequest(*eFan);

	Email* eComplaint = new Email(EmailType::Complaint, "I swear, if I get one more black licorice flavored gumball,\ I am going to break your machines!");
	emailHandler.HandleRequest(*eComplaint);

	Email* eOther = new Email(EmailType::Unclassified, "We would love to have one of your machines installed in our dentist waiting room …");
	emailHandler.HandleRequest(*eOther);

	return 0;
}