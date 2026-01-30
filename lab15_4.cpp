#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int first = rand()%4;
	int sec = rand()%4;
	if(first == 0){
		if(sec == 1) swap(a, b);
		else if(sec == 2) swap(a, c);
		else if(sec == 3) swap(a, d);
	}
	else if(first == 1){
		if(sec == 0) swap(a, b);
		else if(sec == 2) swap(b, c);
		else if(sec == 3) swap(b, d);
	}
	else if(first == 2){
		if(sec == 0) swap(a, c);
		else if(sec == 1) swap(b, c);
		else if(sec == 3) swap(c, d);
	}
	else {
		if(sec == 0) swap(d, a);
		else if(sec == 1) swap(d, b);
		else if(sec == 2) swap(d, c);
	}
}

//Do not modify source code above this line
