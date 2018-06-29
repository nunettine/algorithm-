/*
deque로 처리한다. 
그냥 문제 조건 자체를 그대로 구현해서 문제풀이.
*/

#include<iostream>
#include<deque>

using namespace std;

deque<int> deq;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		deq.push_back(i);
	//함수 구현 
	if (N == 1)
	{
		cout << "1";
		return 0;
	}
	int Ans;
	while (true)
	{
		deq.pop_front();
		Ans = deq.front();
		deq.pop_front();
		if (deq.empty() == true)
			break;
		deq.push_back(Ans);
	}
	cout << Ans;

	return 0;
}
