#include <iostream>
using namespace std;
string grade();

string grade( float average_score){
	string test_results;
	
	 if(average_score >=50) {
	   	test_results = "pass";
		   
	   }
		   
	 else {
		 test_results = "fail";
	 }  
	 
	 return test_results;
}

   int main () {
	   string student_name;
	   int theoryTestMarks,practicalTestMarks;
	   float average_score;
	   
	   cout<<"Enter student_name"<<endl;
	   cin>>student_name;
	   
	   
	   	 while(true){
				cout<<"Enter theory test marks"<<endl;
			 cin>>theoryTestMarks;
			 if(theoryTestMarks <101){
				 break;
			 }
			 else{
				 cout<<"invalid marks"<<endl;
			 }
			}
			 
	   
	   while(true){
		   cout<<"Enter practical test marks"<<endl;
	   cin>>practicalTestMarks;
	   if(practicalTestMarks < 101){
		   break;
	   }
	   else 
	   	cout<<"Invalid Marks"<<endl;
	   }
	   
	   average_score=(theoryTestMarks + practicalTestMarks)/2;
	   
	   cout<<"\n";
	   
	   cout<<"student_name:"<<student_name<<endl;
	   cout<<"theory_marks:"<<theoryTestMarks<<endl;
	   cout<<"practical_marks:"<<practicalTestMarks<<endl;
	   cout<<"average_score:"<<average_score<<endl;
	   cout<<"test_results:"<< grade(average_score)<<endl;
	   
	   

	   
	   

	   
	   
	   

   }