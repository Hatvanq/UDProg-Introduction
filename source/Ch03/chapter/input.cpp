#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your first name\n";
	string firs_name, firs_name1 , firs_name2;
	char friend_sex =0;
	int a=1;
	cin >>firs_name;
	cout << "Hello " <<firs_name << "\n";
	cout << "Enter the name of the person you want to write and change the output \n";
	cin >> firs_name1;
	cout << "Dear " << firs_name1 << " How are you? \n" "I'm fine.\n" "I miss you. \n";
	cout << "Pleas enter another friend name \n";
	cin >> firs_name2;
	cout <<"Have you seen " << firs_name2<< " lately?\n";
	cout<< "if your friend is male write f then m\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
	{cout << "if you see " <<firs_name2<< " please ask him to call me\n";} 
	if(friend_sex == 'f' )
	{cout << "if  you see "<< firs_name2<< " please ask her to call me\n";}
	int age=0;
	cout<< "Enter your age: ";
	cin >> age;
	cout<< "I heard you just had birthday and you are "<<age<< "years old\n";
	if (age <0 || age > 110) error("you' re kidding");
	if (age < 12 ) {
		cout << "Next year you will be" << age+a <<".\n";
	}
	if (age == 17) {
		cout<< "next year you will be able to vote \n"; 
	}
	if (age > 70) {
		cout<< "I hope you are enjoying retirement\n";
	}
	cout<< "Yours sincerely\n\n\n";
	cout<< firs_name;
	cout<<" \n";
	return 0;
 }
