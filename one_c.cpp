//Name - Anirban Banerjee Reg No - 21BPS1061

/*Let us assume VIT student is appointed as a Security Analyst in
MCAFEE (a security company)
Write a CPP program to calculate the number of attacks occurred
in the following domains with static data members and static
member functions along with other class members.

Number of attacks to HR department : Number of firewall-
bypassed attacks + Number of detection-bypassed attacks + 100

new attacks
Number of attacks to Technology department : Number of
software-bypassed attacks + Number of intrusion-bypassed
attacks + 100 new attacks

Number of attacks to testing department : Number of testcase-
bypassed attacks + Number of vulnerabilities-bypassed attacks +

100 new attacks
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class mcaffee
{
	public:
		static int firewall;
		static int detection;
		static int software;
		static int intrusion;
		static int testcase;
		static int vulnerability;
	public:
		static int hr()
		{
			int total;
			cout<<"Enter number of firewall bypassed attacks "<<endl;
			cin>>firewall;
			cout<<"Enter number of detection bypassed attacks "<<endl;
			cin>>detection;
			total=firewall+detection+100;
			cout<<"Total number of attacks to HR department is : "<<total<<"\n";
		}
		static int tech()
		{
			int total2;
			cout<<"Enter number of software bypassed attacks "<<"\n";
			cin>>software;
			cout<<"Enter number of intrusion bypassed attacks "<<"\n";
			cin>>intrusion;
			total2=software+intrusion+100;
			cout<<"Total number of attacks to Tech department = "<<total2<<"\n";
		}
		static int testing()
		{
			int total3;
			cout<<"Enter number of testcase bypassed attacks "<<"\n";
			cin>>testcase;
			cout<<"Enter number of vulnerabilities bypassed attack "<<"\n";
			cin>>vulnerability;
			total3=testcase+vulnerability+100;
			cout<<"Total number of attacks to testing department = "<<total3<<"\n";
		}
};
int mcaffee :: firewall=0;
int mcaffee :: detection=0;
int mcaffee :: software=0;
int mcaffee :: intrusion=0;
int mcaffee :: testcase=0;
int mcaffee :: vulnerability=0;
int main()
{
	mcaffee obj;
	obj.hr();
	obj.tech();
	obj.testing();
	return 0;
}
