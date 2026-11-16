
#include <iostream>
using namespace std;
#include <DBConnection.h>

DBConnection::DBConnection(){
    cout<<"DB Connection is started..."<<endl;
}
DBConnection::~DBConnection(){
    cout<<"DB Connection is ended"<<endl;
}



DBConnection & DBConnection::getInstance(){
    static DBConnection dbCon;
    return dbCon;
}









