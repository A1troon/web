#include<iostream>
#include<regex>
#include<string>
using namespace std;



int main() {
	static const regex r(R"((^[+-]?(([1-9][0-9]*($|\.))|(0\.))|^0$)($|(([0-9]*[1-9])|([0-9]*\([1-9][0-9]*\)))$))");
	while(true){
		string str;
		cin>>str;
    		if(regex_match(str,r)== true)
			cout<<"True\n";
		else
			cout<<"False\n";
	}
}