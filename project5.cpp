
//_________________________________________task 1:_______________________________________________________
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"Enter your number"<<endl;
//	cin>>num;
//	if(num>=0){
//		cout<<"positive number";
//	}
//	return 0;
//}
//task2:
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"Enter a number";
//	cin>>num;
//	if(num%2==0){
//		cout<<"the number is Even";
//	}
//	return 0;
//}
//task3:
//#include <iostream>
//using namespace std;
//int main()
//{
//int a, b, c;
//cout <<"Enter your numbers :";
//cin>>a>> b>> c;
//if(a>b && a>b){
//	cout<<a<<" is greater";
//	}if(b>a && b>c){
//		cout<<b<<" is grater";
//	}
//	if(c>b && c>a){
//		cout<<c<<" is greater";
//	}
//	return 0;
//}
//task4:
//#include <iostream>
//using namespace std;
//int main()
//{
//	char light;
//	cout<<"enter traffic light colour (r for Red, G or Green, y for Yello):";
//	cin>>light;
//	if(light == 'r'|| light=='R'){
//		cout<<"stop!"<<endl;
//		}
//		if(light== 'g'|| light=='G'){
//			cout<<"go!"<<endl;
//			}
//			if(light== 'y' || light=='Y'){
//		cout<<"slow down!"<<endl;
//	}
//	return 0;
//}
//task5:
//#include <iostream>
//using namespace std;
//int main()
//{
//char grade;
//int years_of_service;
//double basic_salary, bonous = 0,
//gross_salary, tax = 0, net_salary;;
//cout<<"enter employ grade (A, B, C):";
//cin>>grade;
//if(grade == 'A'){
//	basic_salary = 50000;
//	}if(grade == 'B'){
//		basic_salary = 30000;
//		}if(grade == 'C'){
//			basic_salary = 20000;
//		}
//		else{
//		 cout<<"invalid grade entered!";
//		 return 1;
//	}
//	cout<<"enter years of service:";
//	cin>>years_of_service;
//	if(years_of_service >=10){
//		bonous = 0.10 * basic_salary;
//	}if(years_of_service >=5){
//		bonous = 0.05*basic_salary;
//	}
//	gross_salary = basic_salary = bonous;
//	if(gross_salary>40000){
//		tax = 0.20*gross_salary;
//	}if(gross_salary>=30000){
//		tax = 0.10*gross_salary;
//	}
//	net_salary = gross_salary - tax;
//	cout<<"\nBasic salary:$"<<basic_salary;
//	cout<<"\nBonous : $"<<bonous;
//	cout<<"\nGross salary:$"<<gross_salary;
//	cout<<"\nNet salary: $"<<net_salary<<endl;
//	return 0;
//}
//task6:
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	float accountbalance = 5000;
//	float withdrawamount;
//	cout <<"enter your number"<<endl;
//	cout<<"enter 1 for check your account balance"<<endl;
//	cout<<"enter 2 for cash withdraw"<<endl;
//	cin>>num;
//	if( num ==1){
//		cout<<"your account balance is :"<<accountbalance<<endl;
//	}else if(num == 2){
//		cout<<"Enter your withdraw amount :"<<endl;
//		cin>>withdrawamount;
//if(withdrawamount <= accountbalance){
//	accountbalance -= withdrawamount;
//	cout<<"withdraw sucessful.remaining balance :"<<accountbalance<<endl;
//}else{
//	cout<<"insufficient balance!"<<endl;}
//}
//else{
//cout<<"invalid choice!"<<endl;
//}
//	return 0;
//}
//task7:
#include <iostream>
using namespace std;
int main()
{
	double salary;
	int yearsofservice;
	cout<<"enter your annual salary: $";
	cin >>salary;
	cout<<"enter your years of service: ";
	cin>>yearsofservice;
	if (salary >=25000){
		if(yearsofservice >=5){
			cout<<"congradulation your eligible for loan"<<endl;
		}else{
			cout<<"you need at least 5 years of service to elgible for loan."<<endl;
			}
			}else{
		cout<<"you need a minimum salary of $25000 for the loan."<<endl;
			}
		return 0;
	}
