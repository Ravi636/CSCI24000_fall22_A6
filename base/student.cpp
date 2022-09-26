// student.cpp

Student::Student(){
	Student::fName = "";
	Student::lName = "";
	Student::gpa = 0;
	Student::credit = 0;

}
	
~Student(){
	

}
void setName(std::string name){
	 Student::fName = name;

}
std::string getName(){
	return fName;

}
void setGpa(int gpa){
	Student::gpa = gpa;

}
int getGpa(){
	return gpa;

}
void setCredit(int credit){


}
int getCredit(){


}
