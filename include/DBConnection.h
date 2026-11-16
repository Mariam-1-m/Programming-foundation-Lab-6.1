
class DBConnection{

DBConnection();
~DBConnection();

public:

DBConnection(DBConnection&)=delete;
DBConnection & operator= (DBConnection&)=delete;
DBConnection(DBConnection&&)=delete;
DBConnection & operator= (DBConnection&&)=delete;

static DBConnection & getInstance();





};