#include<iostream>
#include<regex>
#include<string>
using namespace std;



int main() {
	static const regex r(R"(^\d*[02468]{2}\d*[02468]{2}\d*$)");
	while(true){
		string str;
		cin>>str;
    		if(regex_match(str,r)== true)
			cout<<"True\n";
		else
			cout<<"False\n";
	}
}