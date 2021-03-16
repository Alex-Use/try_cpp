
#include <iostream>
using namespace std;
template < int row, int col>
void init_array(const int x,const int y, int (&bull)[row][col] ,int z){
	
	for(int i = 0;i < x;i++){
		for(int f = 0;f < y;f++){
			bull[i][f] = z;
		}
		
}
}
template < int row, int col>
void print_array(int x, int y, int (&bull)[row][col]){
	
	for(int i = 0;i < x;i++){
		for(int f = 0;f < y;f++){
			cout << bull[i][f];
			
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
	
	//third array

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
	//Second Part
	
int bool[10][10];
init_array(10,10,bool, 0);
print_array(10,10,bool)	;
init_array(10,10,bool, 1);
print_array(10,10,bool)	;


return 0;	
}

