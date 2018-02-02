#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string ten[50];
	int year[50];
	cout<<"How many car do you wish to catalog?";
	cin >>n;
/// NHAP LiEU
	for(int i = 0; i < n; i++)
	{
		cout<<"Car "<<"#"<<i+1<<": "<<endl;
		//nhap ten xe
		cout<<"Please enter the make: \n";
		cin.ignore(1);
		getline(std::cin,ten[i]);
		//nhap nam cua xe
		cout<<"Please enter year: \t";
		cin>>year[i];
}
	cout<<"=================================================== \n";
	cout<<"HERE IS YOUR COLLECTION: " <<endl;
	for(int i = 0; i< n; i++)
	{
		cout<<year[i]<<"\t\t"<<ten[i]<<endl;
	}


	return 0 ;
}
