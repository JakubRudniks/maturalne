#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void load(){
	ifstream text;
	
	
	bool first=true;
	
	int num;
	int num;
	int numl;
	int num1;
	int difer;
	int difer1;
	
	string a;
	
	text.open("ciagi.txt");
	
	while(text.good()){
		bool aciag=true;
			if(!text.eof()){
			
			text >> num;
			numl = num;
			
			for(int i = 0;i<numl;i++){
			 	text>>num;
			 	
			 	if(first==false){
			 	difer=num1-num;
			 	
			 	}
			 	
			 	if(difer!=difer1){
				aciag=false;
				
				}
				
				num1=num;
				first=false;
				difer1=difer;
			}
			
			if(aciag==false){
				
				cout<<endl<<"nie";
				
			}else
			
			{
				
				cout<<endl<<"tak";
				
			}
				
		}
		
	}
	
	text.close();
	
}

int main() {
	
	load();
	
	return 0;
}
