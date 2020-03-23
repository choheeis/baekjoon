#include<iostream>
using namespace std;

void oddLineStart(int a){
	for(int i = 0 ; i < a ; i++){
		if(i%2 == 0){
			// ÇÑ ÁÙÀÇ º°¸¸ ºÃÀ» ¶§ Â¦¼ö ÀÎµ¦½ºÀÎ °æ¿ì 
			cout<<'*';
		}else{
			// ÇÑ ÁÙÀÇ º°¸¸ ºÃÀ» ¶§ È¦¼ö ÀÎµ¦½ºÀÎ °æ¿ì 
			cout<<' ';
		}
	}
}
 
void evenLineStart(int a){
	for(int i = 0 ; i < a ; i++){
		if(i%2 == 0){
			// ÇÑ ÁÙÀÇ º°¸¸ ºÃÀ» ¶§ Â¦¼ö ÀÎµ¦½ºÀÎ °æ¿ì 
			cout<<' ';
		}else{
			// ÇÑ ÁÙÀÇ º°¸¸ ºÃÀ» ¶§ È¦¼ö ÀÎµ¦½ºÀÎ °æ¿ì 
			cout<<'*';
		}
	}
}

int main(){
	int n;
	cin>>n;
	
	for(int i = 0 ; i < n ; i++){
		oddLineStart(n);
		cout<<'\n';
		evenLineStart(n);
		cout<<'\n';
	}
}
