#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>

using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
	
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}


void randomTable(){
	char x='A';
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
				table[i][j]=x;
				x++;
			}
		cout << "\n";
	}

}
//Write definition of function randomTable() here.

