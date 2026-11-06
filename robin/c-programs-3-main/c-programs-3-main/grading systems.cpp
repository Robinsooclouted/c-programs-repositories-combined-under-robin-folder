#include <iostream>
using namespace std;
int main() {
	string StudentName;
	int ExamMarks;
	char TestResult;
	
	
	
	cout<<"Enter StudentName:"<<endl;
	cin>>StudentName;
	cout<<"Enter ExamMarks:"<<endl;
	cin>>ExamMarks;
	
	if(ExamMarks>=70 && ExamMarks<=100) {
		TestResult ='A';
		
	}
	
	else if(ExamMarks>=60 && ExamMarks<=69) {
		TestResult ='B';
		
	}
	
	else if(ExamMarks>=50 && ExamMarks<=59) {
		TestResult ='C';
		
	} 
	
	else if(ExamMarks>=40 && ExamMarks<=49) {
		TestResult ='D';
		
	}
	else  {
		TestResult ='E';
		
	}
	
	cout<<"StudentName:"<<StudentName<<endl;
	cout<<"ExamMarks:"<<ExamMarks<<endl;
	cout<<"StudentGrade:"<<TestResult<<endl;
	
		
}