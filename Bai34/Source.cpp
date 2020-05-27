#include<iostream>
#include<vector>
using namespace std;
struct PhanTu
{
	int x;
	int y;
};
void xuat(vector<long long> a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a.at(i) << " ";
	cout << endl;
}

void QuickSort(vector<long long> a, vector<PhanTu> b, int l, int r)
{
	int x, i, j;
	i = l;
	j = r;
	x = a[(l + r) / 2];
	while (i <= j)
	{
		while (a[i] > x)
			i++;
		while (a[j] < x)
			j--;
		if (i < j)
		{	
			b.push_back(i).x;
		}
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if (j > l)
		QuickSort(a, b, l, j);
	if (i < r)
		QuickSort(a, b, i, r);
}
int main()
{
	int n;
	cin >> n;
	vector<long long> a;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	cout << "Day truoc khi sap xep: ";
	xuat(a, n);
	vector<PhanTu> b;
	int temp = 0;
	QuickSort(a, b, 0, n - 1);
	cout << "Day sau khi sap xep: ";
	xuat(a, n);
	cout << "Cac hoan vi duoc thuc hien trong Quick Sort:" << endl;
	for (int i = 0; i < temp; i ++)
		cout << b[i].x << " " << b[i].y << endl;
	return 0;
}