#include<iostream> 
using namespace std;

void print_receipt();


void print_receipt(string customerName, string phoneModel, int quantity, int phonePrice){
	int totalSalesAmount = phonePrice * quantity;
	
	cout<<"----------Receipt--------------"<<endl;
	cout<<"Customer Name: "<< customerName<<endl;
	cout<<"Phone Model: "<<phoneModel<<endl;
	cout<<"Phone Price: "<<phonePrice<<endl;
	cout<<"Quantity Purchased: "<<quantity<<endl;
	cout<<"Total sales Amount: "<<totalSalesAmount<<endl;
	cout<<"-------------------------------"<<endl;
}

int main(){
	string customer_name, phone_model;
	int quantity, phone_price;
	
	cout<<"Enter your name"<<endl;
	cin>>customer_name;
	
	cout<<"Enter phone model"<<endl;
	cin>>phone_model;
	
	cout<<"Enter quantity of phones purchased"<<endl;
	cin>>quantity;
	
	cout<<"Enter phone price"<<endl;
	cin>>phone_price;
	
	print_receipt(customer_name, phone_model, quantity, phone_price);
	
}