#include<iostream>
#include<regex>
#include<string>
using namespace std;



int main() {
	static const regex r(R"((\d*[2468]|\d0)$)");
	while(true){
		string str;
		cin>>str;
    		if(regex_match(str,r)== true)
			cout<<"True\n";
		else
			cout<<"False\n";
	}
}