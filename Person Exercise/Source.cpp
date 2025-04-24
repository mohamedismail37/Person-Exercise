#include <iostream>
using namespace std;

class clsPerson
{
private:
	short _ID;
	string _FirstName, _LastName, _Phone, _Email;

	int _SendEmailFunction(string Subject, string Body)
	{
		return 0;
	}
	int _SendSMSFunction(string Text)
	{
		return 0;
	}

public:
	clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	string Email()
	{
		return _Email;
	}
	string FirstName()
	{
		return _FirstName;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	short ID()
	{
		return _ID;
	}
	string LastName()
	{
		return _LastName;
	}
	string Phone()
	{
		return _Phone;
	}
	void Print()
	{
		cout << "\nInfo:\n";
		cout << "\n----------------------\n";
		cout << "ID       : " << _ID;
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName : " << _LastName;
		cout << "\nFull Name: " << FullName();
		cout << "\nEmail    : " << _Email;
		cout << "\nPhone    : " << _Phone;
		cout << "\n----------------------\n";
	}
	void setEmail(string NewEmail)
	{
		_Email = NewEmail;
	}
	void setFirstName(string NewFirstName)
	{
		_FirstName = NewFirstName;
	}
	void setLastName(string NewLastName)
	{
		_LastName = NewLastName;
	}
	void setPhone(string NewPhone)
	{
		_Phone = NewPhone;
	}
	void SendEmail(string Subject, string Body)
	{
		_SendEmailFunction(Subject,Body);

		cout << "\nThe following message sent successfully to email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}
	void SendSMS(string Text)
	{
		_SendSMSFunction(Text);

		cout << "\nThe following SMS sent successfully to phone: " << _Phone << endl;
		cout << Text << endl;
	}
};

int main()
{
	clsPerson Person1(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", "00982877277");
	Person1.Print();

	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");

	return 0;
}