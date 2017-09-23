/* Simple C program that connects to MySQL Database server */

 #include <mysql.h>
 #include <iostream>
 using namespace std;
 
 
 int main()
 
{
	cout << "content-type: text/html" << endl << endl;
	cout << "<br><br> " << endl;
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	const char *server = "127.0.0.1";
	const char *user = "janine";
	const char *password = "55Leute"; /* set me first */
	const char *database = "friends";
	const int port = 3306;
	conn = mysql_init(NULL);
	/* Connect to database */
	if (!mysql_real_connect (conn, server, user, password, database, port, NULL, 0)) {
		cout << "Error"<< endl;
		//fprintf(stderr, "%s\n", mysql_error(conn));
		return(1);
	}
	/* send SQL query */
	if (mysql_query(conn, "SELECT * FROM `adress_book`")) {
		//fprintf(stderr, "%s\n", mysql_error(conn)); 
		return(1);
	}
	res = mysql_use_result(conn);
	/* output table name */
	while ((row = mysql_fetch_row(res)) != NULL) {
		//fprintf("%s %s %s %s/n", row[0], row[1], row[2], row[3]);
		cout << row[1] << endl <<endl;
		cout << "<br><br> " << endl;
	}
		
	/* close connection */
	mysql_free_result(res);
	mysql_close(conn);
	return(0);
}