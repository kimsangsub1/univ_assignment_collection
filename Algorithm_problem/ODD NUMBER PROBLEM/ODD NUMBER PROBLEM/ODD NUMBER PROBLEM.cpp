// ODD NUMBER PROBLEM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int n_pro;
	cin >> n_pro;
	for (int i = 0; i < n_pro; i++) {
		int array[10];
		for (int j = 0; j < 10; j++)
			cin >> array[j];
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			if (array[j] % 2 != 0) {
				sum += array[j];
			}
		}
		cout << "#" << i + 1 << " " << sum << endl;
	}
    return 0;
}

