#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;
typedef bool (*cmp_func_t)(const void*, const void*);

void *bsearch(const void *key, const void *base, size_t num, size_t size, cmp_func_t cmp) {
	const char *pivot;
	int result;

	while (num > 0) {
		pivot = (const char *) base + (num >> 1) * size;

		result = cmp(key, (void*)pivot);

		if (result == 0)
			return (void *)pivot;

		if (result > 0) {
			base = pivot + size;
			num--;
		}
		num >>= 1;
	}

	return NULL;
}

int compare(const void* a, const void* b) {

	const int* x = static_cast<const int *>(a);
	const int* y = static_cast<const int *>(b);

	return *x == *y ? 0 : (*x < *y ? -1 : 1);
}

int main()
{
	int arr[] = {2, 18, 45, 67, 99, 99, 99, 112, 205};
	int size = sizeof(arr) / sizeof(arr[0]);
	int val=99;

	cout << sizeof(arr[0]) << endl;

	int* p = (int*)bsearch(&val, arr, size, sizeof(int), 
		[](const void*a, const void* b) -> bool
		{
			auto x = (const int*) a;
			auto y = (const int*) b;
			return *x == *y ? 0 : (*x < *y ? -1 : 1);
		}
	);

	if(p == nullptr)
		cout << "Elemento " << val << " não encontrado!\n";
	else
		cout << val << " encontrado na posição: " << p - arr << "\n";

	return 0;
}