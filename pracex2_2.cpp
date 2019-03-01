#include<iostream>
#include<fstream>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	float x[20];
	int i=0;
	ifstream source("score1.txt");
	ofstream result("result.txt");
	string line;
	while(getline(source,line) && i<20){
		result << i+1 << " : " << line << endl;
		i++;
	}
	result.close();

	//Write your code here
	
	return 0;
}

