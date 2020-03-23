#include<iostream> 
using namespace std;

int main(){
	//A = 고정비용, B = 가변비용, C = 노트북 가격 
	int A, B, C;
	cin>>A>>B>>C;
	
	//	1000 - 고정비용
	//	70 - 가변비용
	//	170 - 측정된 노트북 가격
	//	
	//	1000 + 70*x = 170 * x
	//	1000 = 100x
	//	x = 10
	//	답은 x + 1

	if(B >= C){
		cout<<-1;
		return 0;
	}else{
		int result = A / (C - B);
		cout<<result + 1; 	
	}

}
