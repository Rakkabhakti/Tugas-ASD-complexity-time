#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int x=0;x<16;x++){
    srand((unsigned) time(0));
  int randomNumber, n,z ;
    randomNumber = (rand() % 100) + 1;
//	cout<< randomNumber;
	n = 1000000;
	cout << "Masukkan sembarang number :  "<< n<<endl;


	clock_t start, end;

	/* Recording the starting clock tick.*/
	start = clock();
     z = n + randomNumber;
     cout<<"hasil pertambahan"<< n <<" + "<< randomNumber<<" = "<<z<<endl;

	// Recording the end clock tick.
	end = clock();

	// Calculating total time taken by the program.
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by program is : " << fixed
		<< time_taken << setprecision(5);
	cout << " sec " << endl;}
	return 0;
}
