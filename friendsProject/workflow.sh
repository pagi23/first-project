g++ testform.cpp -o testform
mv testform /opt/lampp/cgi-bin/
g++ greet.cpp -o greet.cgi
mv greet.cgi /opt/lampp/cgi-bin/
cd /opt/lampp/cgi-bin/
chmod 755 greet.cgi
chmod 755 testform
