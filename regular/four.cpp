#include<iostream>
#include<regex>
#include<string>
using namespace std;



int main() {
	static const regex r(R"(^([13579]|([02468](([02468]([13579]|$))|[13579]|$)))*$)");
	while(true){
		string str;
		cin>>str;
    		if(regex_match(str,r)== true)
			cout<<"True\n";
		else
			cout<<"False\n";
	}
}