#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	// ���ڿ����� ���� ó�� ������ ���̳ʽ� �ε��� ���ϱ�  
	int first_minus = -1;
	for(int i = 0 ; i < str.length() ; i++){
		if(str.at(i) == '-'){
			first_minus = i;
			break;
		}
	}
	
	string tmp;
	int first_sum = 0; // ù ��° ���̳ʽ��� ������ ������ ���ڵ��� ��  
	for(int i = 0 ; i < first_minus ; i++){
		if(str.at(i) == '+'){
			// + �� ���  
			first_sum += stoi(tmp);
			tmp = "";
			continue;
		}else if(i == first_minus - 1){
			// ù ��°�� ���� ���̳ʽ� �ٷ� �� �ε����� ���  
			tmp += str.at(i);
			first_sum += stoi(tmp);
		}else{
			// ������ ���
			tmp += str.at(i);
		}
	}

	
	// ù ��°�� ���̳ʽ��� ���� �� ���ڵ��� �� 
	// ù ��°�� ���̳ʽ��� ���� �Ĵ� ���̳ʽ��� ������ �÷����� ������ �� ���� ��  
	string tmp2;
	int sum = 0;
	for(int i = first_minus + 1 ; i < str.length() ; i++){
		// ������ ���
		if(str.at(i) != '+' && str.at(i) != '-'){
			if(i == str.length() - 1){
				// �����̸鼭 ���ڿ��� �� �������� ���  
				tmp2 += str.at(i);
				sum += stoi(tmp2);	
			}else{
				tmp2 += str.at(i);		
			}
			
		}else{
			// +�� -�� ��� 
			sum += stoi(tmp2);
			tmp2 = "";
		}
		
	} 
	
	if(first_sum == 0){
		cout<<sum;
	}else{
		cout<<first_sum - sum;	
	}
	
	
}
