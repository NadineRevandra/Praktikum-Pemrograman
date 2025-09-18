#include <iostream>
using namespace std;

int main(){
int X;	
	cout<<"Masukan sebuah bilangan bulat:";
	cin>>X;
	if (X < 1) {
		cout<<"User salah input"<<endl;
	}
	else if (X%2==0 && X!=2) {
		cout<<"Input bukan prima"<<endl;
	}
	else {
		cout <<"Mungkin saja prima"<<endl;
	}
	return 0;
}

