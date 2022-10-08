## Algorithm

###Date Class
Private string varables to store month, day, year, and date and only can be accesed by the date class only

Public methods that can be accesed if a class us a date object to call them. 
Date constructor to set class variables to default values.
Date deconstructor to delete value stored in the heap
void month method with a string parameter that sets month's value to the parameters's value.
void day method with a string parameter that sets day's value to the parameters's value.
void year method with a string parameter that sets year's value to the parameters's value.
void date method with a string parameter that sets date's value to the parameters's value.
string month method that return month's value stored in the class
string day method that return day's value stored in the class
string year method that return year's value stored in the class
string date method that return date's value stored in the class

###Address Class
Private string varables to store address1, address2, city, state, and zip and they can only be accesed by the Address class only
Address constructor to set class variables to default values, which are nothing
Address deconstructor to delete value stored in the heap
void address1 method with string parameter that set address1's value to the parameters's value.
void address2 method with string parameter that set address2's value to the parameters's value.
void city method with string parameter that set city's value to the parameters's value.
void state method with string parameter that set state's value to the parameters's value.
void zip method with string parameter that set zip's value to the parameters's value.
string address1 method that returns address1's value stored in the class
string address2 method that returns address2's value stored in the class
string city method that returns city's value stored in the class
string state method that returns state's value stored in the class
string zip method that returns zip's value stored in the class

###Student Class
Private variables to store student's first & last name, gpa, credit hours.
Private Address objects to store the object that contains student's address1, address2, city, state, and zip
Privare Date objects to store the object that contains student's date of birth and date of graduation

Student constructor to set class variables to default values, which are empty
Student deconstructor to delete data stored in the heap 

void first name method with string parameter that sets first name's value to the parameter's value.
void last name method with string parameter that sets last name's value to the parameter's value.
void gpa  method with string parameter that sets gpa's value to the parameter's value.
void credit hours  method with string parameter that sets credit hour's value to the parameter's value.

string first name method that returns first name value stored in the class
string last name method that returns last name value stored in the class
string gpa method that returns gpa value stored in the class
string credit hours method that returns credit hours value stored in the class

void address1 method with Address parameter that set address1 object to the parameters's object.
void address2 method with Address parameter that set address2 object to the parameters's object.
void city method with Address parameter that set city object to the parameters's object.
void state method with Address parameter that set state object to the parameters's object.
void zip method with Address parameter that set zip object to the parameters's object.

void dob method with Date parameter that set dob object to the parameters's object.
void graduation method with Date parameter that set grad date object to the parameters's object.

getaddress1 method with Address return datatype that return address1 object.
getaddress2 method with Address return datatype that return address2 object.
getcity method with Address return datatype that return city object.
getstate method with Address return datatype that return state object.
getzip method with Address return datatype that return zip object.

getDob method with Date return datatype that return dob object.
getGraduation method with Date return datatype that return grad date object.

void fullreport method with ofstream parameter and sends all of the student's data to the ofstream file
void shortreport method with ofstream parameter and sends  student's names to the ofstream file


