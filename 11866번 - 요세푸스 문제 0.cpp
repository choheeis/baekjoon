#include<iostream>
#include<vector>
using namespace std;

int main(){
	// N = ���� ��, K = �� ��° ��� ��������  
	int N, K;
	cin>>N>>K;
	
	vector<int> vec;
	vec.push_back(0);
	
	// 0, 1, 2, 3, 4, 5, 6, 7
	for(int i = 1 ; i <= N ; i++){
		vec.push_back(i);	
	}
	
	
	int i = 0; // �ε����� ����Ű�� ����  
	int j = 0; // K�� ���� ���� 
	vector<int> checked;
	
	// 1) vec�� ũ�Ⱑ 0�� �ƴҵ��� while���� �����Ѵ�.
	while(checked.size() != N){
		
		// 2) while���� �� �� �� ������ �ε����� ����Ű�� ������ K�� ���� ������ 1�� ������Ų��. 
		j++;
		i++; 
		
		// 3) i�� ������ �迭�� ��� ��� i�� �ʱ�ȭ ���ش�. 
		if(i == N + 1){
			i = 1;
		}
		
		// 4) �̹� ���� ���Ҹ� i �� ����ų ���� 1 ������Ų j�� ��ȿȭ���ش�. 
		if(vec[i] == -1){
			j--;
			continue;
		}
		
		// 3) K�� ���� ������ 3��°�� �Ǵ� ��� i��° �ε����� �ִ� ���� checked�� �ִ´�. 
		if(K==j){
			checked.push_back(vec[i]);
			vec[i] = -1; // ���� ó��
			j = 0;
		}
		
		
	}
	
	
	cout<<'<';
	for(int i = 0 ; i < checked.size() ; i++){
		if(i == checked.size() - 1){
			cout<<checked[i]<<'>';
		}else{
			cout<<checked[i]<<", ";	
		}
	}
	
	
}
