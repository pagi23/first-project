#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
cout << "content-type: text/html" << std::endl << std::endl;
cout << "Hallo Welt <br>";
cout << getenv("CONTENT_LENGTH");
char query[1024]={};
int len, startNumberLocation, endNumberLocation;
//string *data;
char strnum[20];
//if(getenv("CONTENT_LENGTH"))
//{
len = atoi(getenv("CONTENT_LENGTH"));
//cin >> data;
cin.read(query, len);
cout << query;
//string str(query);
//cout << str <<endl;
//data = query;
//startNumberLocation = data.find("name")+5;
//endNumberLocation = data.find("&button");
//}

//cout << "<html>" << "<head><title>Welcome message</title></head>" << "<body>" << "<h1>Greetings!</h1>" << "hallo " << data
//<< "<p>Welcome " << (data.substr(startNumberLocation, endNumberLocation-startNumberLocation)) <<"</p>"
//<< "</body></html>" << endl;
return 0;
}
