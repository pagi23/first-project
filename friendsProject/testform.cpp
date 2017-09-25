/* Simple C program that connects to MySQL Database server */
 //#include <stdio.h>
#include <iostream>
using namespace std;
 
 
 int main()
 
{
	cout << "content-type: text/html" << endl << endl;
        cout << "<html><head><meta http-equiv='Content-Type' content='text/html; charset=UTF-8'><title>Insert title here</title></head>" << endl << endl;
	cout << "<body> <form method = 'post' action = '/cgi-bin/greet.cgi'> <p>Enter your name</p> <input type = 'text' name = 'name'> " << endl << endl;
	cout << "<input type = 'submit' name = 'button'/> </form> </body> </html>" << endl << endl;
}
