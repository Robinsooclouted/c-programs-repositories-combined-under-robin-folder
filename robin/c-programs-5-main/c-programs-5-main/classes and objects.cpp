#include <iostream>
using namespace std;
class Student {
	 public:
      	string student_name;
      	int admission_number;
      	float fee_balance;
      	
      	void input_details() {
      		cout<<"Enter student_name:"<<endl;
      	cin>>student_name;
      	
      	cout<<"Enter admission_number:"<<endl;
      	cin>>admission_number;
      	
      	cout<<"Enter fee_balance:"<<endl;
      	cin>>fee_balance;
			  
		  }
      	
      void PayFee(float FeePaid) {
		  fee_balance = fee_balance - FeePaid;
	  }
      	 void display_status() {
			   cout<<"student_name:"<<student_name<<endl;
			   cout<<"admission_number:"<<admission_number<<endl;
			   cout<<"fee_balance:"<<fee_balance<<endl;
		   }
};
     int main() {
		 Student Student1;
		 
		 Student1.input_details();
		 Student1.PayFee(2000);
		 Student1.display_status();
		 
		 return 0;
	 }
      	