#include <iostream> 
#include <cmath>
using namespace std; 
int main() 
{ 
int a=0,b=0,m=0, k = 0; 
int i = 0; 
int arr[100]; 
for (int i = 0; i < 100; i++) 
{ 
cin >> arr[i]; 
if (arr[i] == 0) 
break; 
} 
for (int i = 1; i < 101; i++) { 
if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) { 
if (a == 0 || a>b) { 
b=i; 
} 
else { 
a = i; 
} 
} 
if (arr[i] == 0) { 
break; 
} 
m = abs(b - a) - 2; 

} 
cout << m << endl; 

system("pause"); 
return 0; 

}