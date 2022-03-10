#include<iostream>
#include<regex>
#include<string>
using namespace std;



int main() {
	static const regex r(R"((?=.*[0-9])(?=.*[-+!@#+$%^&*])(?=.*[a-z])(?=.*[A-Z])[0-9a-zA-Z!@#$%^&*+-]{8,})");
	while(true){
		string str;
		cin>>str;
    		if(regex_match(str,r)== true)
			cout<<"True\n";
		else
			cout<<"False\n";
	}
}