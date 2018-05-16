#include<iostream>

using namespace std;
void f1(int a){
    a=a+1;
}

//&а указывает на переменную, если написать &a, значение передастся по ссылке.
// const&a показывает, что значение можно только читать.
void f2(int &a){
	a=a+1;
}

/*void f2(string s){
	s.append("##");
}

*/

int main(){
    int b=5;
	f1(b);
	cout<<b<<" ";
	
	int c=5;
	f2(c);
	cout<<c;
}


