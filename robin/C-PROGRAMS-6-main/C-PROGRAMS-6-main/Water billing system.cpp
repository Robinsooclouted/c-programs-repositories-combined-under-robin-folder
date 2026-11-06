/*ROBINSON NYANGENA CT101/G/26684/25*/
#include <iostream>
using namespace std;
void getCustomerDetails(string customer_name,double & number_of_units_consumed,double & rate_per_hour) {
	cout<<"Enter customer_name:"<<endl;
	cin>>customer_name;
	
	cout<<"Enter number_of_units_consumed:"<<endl;
	cin>>number_of_units_consumed;
	
	cout<<"Enter rate_per_hour:"<<endl;
	cin>>rate_per_hour;
	
}
     double CalculateBill(double number_of_units_consumed,double rate_per_hour) {
		 return number_of_units_consumed * rate_per_hour;
	 }
	 
	 double ApplyDiscount(double Bill,double number_of_units_consumed) {
		 if (number_of_units_consumed > 100) {
			 Bill=Bill - (Bill * 0.10);
		 }
		 return Bill;
	 }
	 void DisplayBill(string Customer_name,double number_of_units_consumed,double Bill,double Discount) {
		 cout<<"Customer_name:"<<Customer_name<<endl;
		 cout<<"number_of_units_consumed:"<<number_of_units_consumed<<endl;
		 cout<<"TotalBill before discount:"<<Bill<<endl;
		 cout<<"Discount:"<<Discount<<endl;
		 cout<<"FinalAmountPayable:"<<Bill - Discount<<endl;
	 }
	 int main() {
		 string Customer_name;
		 double number_of_units_consumed;
		 double rate_per_hour=50.0,Bill,Discount=0;
		 
		 getCustomerDetails(Customer_name,number_of_units_consumed,rate_per_hour);
		 
		 Bill=CalculateBill(number_of_units_consumed,rate_per_hour);
		 double FinalBill=ApplyDiscount(Bill,number_of_units_consumed);
		 Discount=Bill-FinalBill;
		 
		 DisplayBill(Customer_name,number_of_units_consumed,Bill,Discount);
		 
		 return 0;
		 
		 }