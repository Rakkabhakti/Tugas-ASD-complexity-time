#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;
    int data[1000000], data2[1000000];
    int n;  
void tukar (int a,int b){
    int t;
    t=data[b];
    data[b]=data[a];
    data[a]=t;
	}
void input(){
    cout<<"Masukan Jumlah Data = ";
	cin>>n;
	cout<<endl;
	  srand((unsigned) time(0));
  int randomNumber;
  for (int i = 0; i < n; i++) {
    randomNumber = (rand() % 10000) + 1;
	data[i]=randomNumber;
    cout <<"  [" <<randomNumber <<"] " ;
  }
		}
void tampil(){
	for (int i=0;i<n;i++){
	     cout<<"["<<data[i]<<"] ";
	}
	cout<<endl;
	}
void bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
	cout<<endl;
}


int main()
  {
  	cout<<"ALGORITMA BUBBLE SORT"<<endl;
  	cout<<"----------------------"<<endl;
	input();
	struct timeval start, end;
	gettimeofday(&start, NULL);
	ios_base::sync_with_stdio(false);
	cout<<endl<<"Proses Bubble Sort"<<endl;
	tampil();
	bubble_sort();
		gettimeofday(&end, NULL);
	double time_taken;
	time_taken = (end.tv_sec - start.tv_sec) * 1e6;
	time_taken = (time_taken + (end.tv_usec -
							start.tv_usec)) * 1e-6;
	cout << "Time taken by program is : " << fixed
		<< time_taken << setprecision(6);
	cout << " sec" << endl;
  getch();
  }