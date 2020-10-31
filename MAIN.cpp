// its my first try on cpp, will u can be kindly with me?
#include <iostream>
using namespace std;
template < int row, int col>
void init_array(const int x,const int y, int (&bullshit)[row][col] ,int z){
	
	for(int i = 0;i < x;i++){
		for(int f = 0;f < y;f++){
			bullshit[i][f] = z;
		}
		
}
}
template < int row, int col>
void print_array(int x, int y, int (&bullshit)[row][col]){
	
	for(int i = 0;i < x;i++){
		for(int f = 0;f < y;f++){
			cout << bullshit[i][f];
			
		}
		cout << endl;
	}
}


int main()
{
	//First Part
	//first array , only 1

int a[10];
int foo = 0;
for(int i = 0;i < 10;i++){
	a[i] = 1;
}
while(foo<10){
	cout << a[foo];
	foo++;
}
cout << endl;
	
	//second array, upgrade first

int b[10];
int bar = 0;
for(int i = 0;i < 10;i++){
	if(i%2 == 0){
		b[i] = 0;
	}
	else{
		b[i] = 1;
	}
}

while(bar<10){
	cout << b[bar];
	bar++;
}
cout << endl;
	
	//third array, maybe use switch?

int c[10];
int cpp = 0;
for(int i = 0;i < 10;i++){
	if(i%2 == 0){
		c[i] = 0;
	}
	else{
		c[i] = 1;
	}
	switch(i){
		case 4:
			c[i] = 3;
			break;
		case 5:
			c[i] = 2;
			break;
	}
}
while(cpp<10){
	cout << c[cpp];
	cpp++;
}
cout << endl;
cout << endl;
	//Second Part, is it pointer?
	
int boolshit[10][10];
init_array(10,10,boolshit, 0);
print_array(10,10,boolshit)	;
init_array(10,10,boolshit, 1);
print_array(10,10,boolshit)	;


return 0;	
}

