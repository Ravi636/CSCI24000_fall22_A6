// student.cpp

Student::Student(){
	Student::fName = "";
	Student::lName = "";
	Student::gpa = 0;
	Student::credit = 0;

}
	
Student::~Student(){
	

}
void Student::setName(std::string fname){
	 Student::fName = fname;

}
std::string Student::getName(){
	return fName;

}
void Student::setlName(std::string lName){
	Student::lName = lName;
}
void Student::setGpa(int gpa){
	Student::gpa = gpa;

}
int Student::getGpa(){
	return gpa;

}
void Student::setCredit(int credit){
	Student::credit = credit;

}
int getCredit(){
	return credit;

}
